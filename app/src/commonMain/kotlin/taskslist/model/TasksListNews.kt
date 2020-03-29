package taskslist.model

import taskslist.model.enum.TasksListNewsId

data class TasksListNews(
    val id: TasksListNewsId,
    val data: Any? = null
)