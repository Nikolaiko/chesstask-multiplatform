package network.api

import core.model.task.ChessTaskShortData
import network.model.TaskShortData
import io.ktor.client.statement.readText
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import kotlinx.serialization.list
import network.API_VERSION
import network.ApiExceptionHandler
import network.ApiTasksListHandler

class TasksListApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Unconfined + supervisorJob)

    init {
        requestEncodedPath = "/api/$API_VERSION/tasks"
    }

    fun getAllTasks(
        token: String,
        tasksCallback: ApiTasksListHandler,
        exceptionCallback: ApiExceptionHandler
    ) {
        apiContext.launch {
            try {
                val tasks = requestAsync(token).await()
                val parsedTasks = tasks.map {
                    ChessTaskShortData(it.id, it.name)
                }
                tasksCallback(parsedTasks)
            } catch (tasksListException: Exception) {
                println(tasksListException)
                exceptionCallback(tasksListException)
            }
        }
    }

    private fun requestAsync(token: String): Deferred<List<TaskShortData>> = apiContext.async {
        val json = Json(JsonConfiguration.Stable)
        val response = makeGetRequest(requestHeaders = listOf(Pair("Authorization", "Bearer $token")))
        println(response)
        json.parse(TaskShortData.serializer().list, response.readText())
    }
}