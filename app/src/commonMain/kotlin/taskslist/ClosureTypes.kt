package taskslist

import taskslist.model.TasksListNews
import taskslist.model.TasksListState
import taskslist.model.enum.TasksListNewsId

typealias VoidCallback = () -> Unit
typealias TasksStateChangeCallback = (TasksListState) -> Unit
typealias TasksNewsCallback = (TasksListNews) -> Unit
typealias SelectedTaskCallback = (Int) -> Unit