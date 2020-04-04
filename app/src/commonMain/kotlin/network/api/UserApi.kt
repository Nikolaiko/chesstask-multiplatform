package network.api

import core.model.user.AuthorizationUserData
import core.model.user.UserToken
import io.ktor.client.statement.readText
import io.ktor.http.ContentType
import io.ktor.http.content.TextContent
import kotlinx.coroutines.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import network.API_VERSION
import network.ApiExceptionHandler
import network.ApiLoginHandler
import network.model.NewUserData

class UserApi : BaseApi() {
    private val apiContext = CoroutineScope(Dispatchers.Default + supervisorJob)

    fun loginUser(
        loginData: AuthorizationUserData,
        loginCallback: ApiLoginHandler,
        exceptionCallback: ApiExceptionHandler
    ) {
        println("Login Start")
        apiContext.launch {
            try {
                withContext(Dispatchers.Default) {
                    requestEncodedPath = "/api/$API_VERSION/user/signin"
                    val tokens = loginAsync(loginData)
                    loginCallback(tokens)
                }
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
        apiContext.launch {
            try {
                withContext(Dispatchers.Default) {
                    requestEncodedPath = "/api/v1/user/signup"
                    registerAsync(registerData)

                    requestEncodedPath = "/api/v1/user/signin"
                    val tokens = loginAsync(registerData)
                    registerCallback(tokens)
                }
            } catch (loginException: Exception) {
                exceptionCallback(loginException)
            }
        }
    }

    private suspend fun loginAsync(loginData: AuthorizationUserData): UserToken  {
        val json = Json(JsonConfiguration.Stable)
        val jsonBody = json.stringify(AuthorizationUserData.serializer(), loginData)
        val response = makePostRequest(requestBody = TextContent(jsonBody, contentType = ContentType.Application.Json))
        return json.parse(UserToken.serializer(), response.readText())
    }

    private suspend fun registerAsync(loginData: AuthorizationUserData): NewUserData {
        val json = Json(JsonConfiguration.Stable)
        val jsonBody = json.stringify(AuthorizationUserData.serializer(), loginData)
        val response = makePostRequest(requestBody = TextContent(jsonBody, contentType = ContentType.Application.Json))
        return json.parse(NewUserData.serializer(), response.readText())
    }
}