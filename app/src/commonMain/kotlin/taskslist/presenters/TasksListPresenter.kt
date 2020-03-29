package taskslist.presenters

import core.model.ChessTaskFullData
import taskslist.model.enum.TasksListDestinationId
import taskslist.model.enum.TasksListMessageId
import taskslist.model.enum.TasksListNewsId
import taskslist.reducers.TasksListReducer
import taskslist.views.TasksListView

class TasksListPresenter(
    private val listReducer: TasksListReducer
) {
    private var view: TasksListView? = null

    fun attachView(presenterView: TasksListView) {
        view = presenterView
        bindToView()
    }

    fun detachView() {
        view = null
    }

    fun refreshTasks() {
        listReducer.refreshTasks()
    }

    private fun bindToView() {
        view?.selectedTaskCallback = {
            listReducer.getTaskById(it)
        }

        view?.logoutCallback = {
            listReducer.logout()
        }

        listReducer.newsCallback = {
            when(it.id) {
                TasksListNewsId.NULL_TOKEN_ERROR -> view?.displayMessage(TasksListMessageId.NULL_USER_TOKEN)
                TasksListNewsId.REQUEST_EXCEPTION -> view?.displayMessage(TasksListMessageId.REQUEST_EXCEPTION)
                TasksListNewsId.LOGOUT -> view?.navigateTo(TasksListDestinationId.LOGIN_SCREEN)
                TasksListNewsId.NAVIGATE_TO_TASK -> {
                    when (val task: ChessTaskFullData? = it.data as? ChessTaskFullData) {
                        null -> view?.displayMessage(TasksListMessageId.LOADED_TASK_NULL)
                        else -> view?.loadedTaskReady(task)
                    }
                }
            }
        }

        listReducer.updateStateCallback = {
            view?.updateTasksList(it.loadedTasks)
            view?.setLoadingVisibility(it.loadingActive)
        }
    }
}