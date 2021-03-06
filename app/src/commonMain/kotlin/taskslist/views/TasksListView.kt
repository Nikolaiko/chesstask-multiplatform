package taskslist.views

import core.model.task.ChessTask
import core.model.task.ChessTaskFullData
import core.model.task.ChessTaskShortData
import taskslist.SelectedTaskCallback
import taskslist.VoidCallback
import taskslist.model.enum.TasksListDestinationId
import taskslist.model.enum.TasksListMessageId

interface TasksListView {
    var selectedTaskCallback: SelectedTaskCallback?
    var logoutCallback: VoidCallback?

    fun displayMessage(newsMessage: TasksListMessageId)
    fun navigateTo(destination: TasksListDestinationId)
    fun setLoadingVisibility(visible: Boolean)
    fun updateTasksList(list: List<ChessTaskShortData>)
    fun loadedTaskReady(task: ChessTask)
}