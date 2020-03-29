package network

import core.model.ChessTaskFullData
import core.model.ChessTaskShortData
import core.model.UserToken

typealias ApiExceptionHandler = (exception: Exception) -> Unit
typealias ApiLoginHandler = (userToken: UserToken) -> Unit
typealias ApiTasksListHandler = (tasks: List<ChessTaskShortData>) -> Unit
typealias ApiTaskListHandler = (task: ChessTaskFullData) -> Unit