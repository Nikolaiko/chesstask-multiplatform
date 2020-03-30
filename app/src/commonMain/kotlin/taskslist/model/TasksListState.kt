package taskslist.model

import core.model.task.ChessTaskShortData

data class TasksListState(
    val loadingActive: Boolean,
    val loadedTasks: List<ChessTaskShortData>
)