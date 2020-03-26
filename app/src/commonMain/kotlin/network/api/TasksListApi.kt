package network.api

import core.model.TaskShortData
import io.ktor.client.statement.readText
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import kotlinx.serialization.list

class TasksListApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Unconfined + supervisorJob)

    init {
        requestEncodedPath = "/tasks"
    }

    fun getAllTasks() {
        apiContext.launch {
            try {
                val tasks = requestAsync().await()
            } catch (loginException: Exception) {

            }
        }
    }

    private fun requestAsync(): Deferred<List<TaskShortData>> = apiContext.async {
        val json = Json(JsonConfiguration.Stable)
        val response = makeGetRequest()
        json.parse(TaskShortData.serializer().list, response.readText())
    }
}