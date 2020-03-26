package network.api

import core.model.AuthorizationUserData
import core.model.UserToken
import io.ktor.client.statement.readText
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import network.ApiExceptionHandler
import network.ApiLoginHandler

class UserApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Unconfined + supervisorJob)

    fun loginUser(
        loginData: AuthorizationUserData,
        loginCallback: ApiLoginHandler,
        exceptionCallback: ApiExceptionHandler
    ) {
        requestEncodedPath = "/user/signin"
        apiContext.launch {
            try {
                val tokens = requestAsync(loginData).await()
                loginCallback(tokens)
            } catch (loginException: Exception) {
                exceptionCallback(loginException)
            }
        }
    }

    fun registerUser(
        registerData: AuthorizationUserData,
        registerCallback: ApiLoginHandler,
        exceptionCallback: ApiExceptionHandler
    ) {
        requestEncodedPath = "/user/signup"
        apiContext.launch {
            try {
                val tokens = requestAsync(registerData).await()
                registerCallback(tokens)
            } catch (loginException: Exception) {
                exceptionCallback(loginException)
            }
        }
    }

    private fun requestAsync(loginData: AuthorizationUserData): Deferred<UserToken> = apiContext.async {
        val json = Json(JsonConfiguration.Stable)
        val jsonBody = json.stringify(AuthorizationUserData.serializer(), loginData)
        val response = makePostRequest(requestBody = jsonBody)
        json.parse(UserToken.serializer(), response.readText())
    }
}