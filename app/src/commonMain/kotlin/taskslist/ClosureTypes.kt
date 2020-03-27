package taskslist

import taskslist.model.TasksListState
import taskslist.model.enum.TasksListNewsId

typealias VoidCallback = () -> Unit
typealias TasksStateChangeCallback = (TasksListState) -> Unit
typealias TasksNewsCallback = (TasksListNewsId) -> Unit
typealias SelectedTaskCallback = (Int) -> Unit