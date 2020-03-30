package network

import core.model.task.ChessTask
import core.model.task.ChessTaskShortData
import core.model.user.UserToken

typealias ApiExceptionHandler = (exception: Exception) -> Unit
typealias ApiLoginHandler = (userToken: UserToken) -> Unit
typealias ApiTasksListHandler = (tasks: List<ChessTaskShortData>) -> Unit
typealias ApiTaskHandler = (task: ChessTask) -> Unit