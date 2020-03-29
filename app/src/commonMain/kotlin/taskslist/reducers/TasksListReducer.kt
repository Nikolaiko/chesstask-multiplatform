package taskslist.reducers

import network.api.SingleTaskApi
import network.api.TasksListApi
import repository.LoggedUserRepository
import taskslist.TasksNewsCallback
import taskslist.TasksStateChangeCallback
import taskslist.model.TasksListNews
import taskslist.model.TasksListState
import taskslist.model.enum.TasksListNewsId

class TasksListReducer(
    private val loggedUserRepository: LoggedUserRepository,
    private val tasksApi: TasksListApi,
    private val taskApi: SingleTaskApi
) {
    private var state: TasksListState = TasksListState(false, emptyList())

    var updateStateCallback: TasksStateChangeCallback? = null
    var newsCallback: TasksNewsCallback? = null

    fun refreshTasks() {
        state = state.copy(loadingActive = true)
        updateStateCallback?.invoke(state)

        val userTokens = loggedUserRepository.getLoggedUserTokens()
        if (userTokens != null) {
            tasksApi.getAllTasks(userTokens.token, {
                state = TasksListState(false, it)
                updateStateCallback?.invoke(state)
            }, {
                println(it)
                newsCallback?.invoke(TasksListNews(TasksListNewsId.REQUEST_EXCEPTION))
                state = TasksListState(false, emptyList())
                updateStateCallback?.invoke(state)
            })
        } else {
            state = TasksListState(false, emptyList())
            updateStateCallback?.invoke(state)
            newsCallback?.invoke(TasksListNews(TasksListNewsId.NULL_TOKEN_ERROR))
        }
    }

    fun getTaskById(id: Int) {
        state = state.copy(loadingActive = true)
        updateStateCallback?.invoke(state)

        val userTokens = loggedUserRepository.getLoggedUserTokens()
        if (userTokens != null) {
            taskApi.getTaskById(userTokens.token, id, {
                state = state.copy(loadingActive = false)
                updateStateCallback?.invoke(state)
                newsCallback?.invoke(TasksListNews(TasksListNewsId.NAVIGATE_TO_TASK, it))
            }, {
                println(it)
                newsCallback?.invoke(TasksListNews(TasksListNewsId.REQUEST_EXCEPTION))
                state = TasksListState(false, emptyList())
                updateStateCallback?.invoke(state)
            })
        } else {
            state = TasksListState(false, emptyList())
            updateStateCallback?.invoke(state)
            newsCallback?.invoke(TasksListNews(TasksListNewsId.NULL_TOKEN_ERROR))
        }
    }

    fun logout() {
        loggedUserRepository.logout()
        newsCallback?.invoke(TasksListNews(TasksListNewsId.LOGOUT))
    }
}