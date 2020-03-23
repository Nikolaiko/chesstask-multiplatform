package network

import core.model.UserToken

typealias ApiExceptionHandler = (exception: Exception) -> Unit
typealias ApiLoginHandler = (userToken: UserToken) -> Unit