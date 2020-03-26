package network.api

import io.ktor.client.HttpClient
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.parameter
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.HttpStatement
import io.ktor.http.HttpMethod
import io.ktor.http.URLProtocol

open class BaseApi {
    companion object {
        private const val SERVER_ADDRESS = "92.242.40.194"
        private const val SERVER_PORT = 1337
    }

    private val client = HttpClient {
        expectSuccess = false
    }

    protected var requestEncodedPath = ""

    protected suspend fun makePostRequest(
        requestBody:Any = "",
        parameters:List<Pair<String, String>> = emptyList(),
        requestHeaders:List<Pair<String, String>> = emptyList()
    ): HttpResponse {
        val builder = HttpRequestBuilder().apply {
            url{
                protocol = URLProtocol.HTTP
                port = SERVER_PORT
                host = SERVER_ADDRESS
                encodedPath = requestEncodedPath
            }
            method = HttpMethod.Post
            body = requestBody

            for (currentPair:Pair<String, String> in requestHeaders) {
                headers.append(currentPair.first, currentPair.second)
            }
            for (currentPair:Pair<String, String> in parameters) {
                parameter(currentPair.first, currentPair.second)
            }
        }
        return HttpStatement(builder, client).execute()
    }
}