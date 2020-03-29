package taskslist.model

import core.model.ChessTaskFullData
import core.model.ChessTaskShortData

data class TasksListState(
    val loadingActive: Boolean,
    val loadedTasks: List<ChessTaskShortData>
)