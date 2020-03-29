package network.api

import core.model.ChessTaskFullData
import core.model.ChessTaskShortData
import io.ktor.client.statement.readText
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import kotlinx.serialization.list
import network.API_VERSION
import network.ApiExceptionHandler
import network.ApiTaskListHandler
import network.model.TaskFullData
import network.model.TaskShortData
import taskslist.SelectedTaskCallback

class SingleTaskApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Unconfined + supervisorJob)

    fun getTaskById(
        token: String,
        id: Int,
        taskCallback: ApiTaskListHandler,
        exceptionCallback: ApiExceptionHandler
    ) {
        requestEncodedPath = "/api/$API_VERSION/tasks/$id"
        apiContext.launch {
            try {
                val task = requestAsync(token).await()
                taskCallback(task)

            } catch (taskException: Exception) {
                exceptionCallback.invoke(taskException)
            }
        }
    }

    private fun requestAsync(token: String): Deferred<ChessTaskFullData> = apiContext.async {
        val json = Json(JsonConfiguration.Stable)
        val response = makeGetRequest(requestHeaders = listOf(Pair("Authorization", "Bearer $token")))
        println(response)
        val parsedResponse = json.parse(TaskFullData.serializer(), response.readText())
        ChessTaskFullData(parsedResponse.id, parsedResponse.fen, parsedResponse.pgn)
    }
}