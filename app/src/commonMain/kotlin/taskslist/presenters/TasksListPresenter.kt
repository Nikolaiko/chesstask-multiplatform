package taskslist.presenters

import taskslist.model.enum.TasksListMessageId
import taskslist.model.enum.TasksListNewsId
import taskslist.reducers.TasksListReducer
import taskslist.views.TasksListView

class TasksListPresenter(
    private val reducer: TasksListReducer
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
        reducer.refreshTasks()
    }

    private fun bindToView() {
        view?.selectedTaskCallback = {

        }

        view?.logoutCallback = {

        }

        reducer.newsCallback = {
            when(it) {
                TasksListNewsId.NULL_TOKEN_ERROR -> view?.displayMessage(TasksListMessageId.NULL_USER_TOKEN)
                TasksListNewsId.REQUEST_EXCEPTION -> view?.displayMessage(TasksListMessageId.REQUEST_EXCEPTION)
            }
        }

        reducer.updateStateCallback = {
            view?.updateTasksList(it.loadedTasks)
            view?.setLoadingVisibility(it.loadingActive)
        }
    }
}