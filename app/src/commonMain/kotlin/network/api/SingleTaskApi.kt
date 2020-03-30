package network.api

import core.model.task.ChessTask
import core.parsers.getStartingColor
import core.parsers.getStartingPositions
import core.parsers.parsePgnString
import io.ktor.client.statement.readText
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import network.API_VERSION
import network.ApiExceptionHandler
import network.ApiTaskHandler
import network.model.TaskFullData

class SingleTaskApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Unconfined + supervisorJob)

    fun getTaskById(
        token: String,
        id: Int,
        taskCallback: ApiTaskHandler,
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

    private fun requestAsync(token: String): Deferred<ChessTask> = apiContext.async {
        val json = Json(JsonConfiguration.Stable)
        val response = makeGetRequest(requestHeaders = listOf(Pair("Authorization", "Bearer $token")))
        println(response)
        val parsedResponse = json.parse(TaskFullData.serializer(), response.readText())
        ChessTask(
            parsedResponse.id,
            getStartingPositions(parsedResponse.fen),
            getStartingColor(parsedResponse.fen),
            parsePgnString(parsedResponse.pgn)
        )
    }
}