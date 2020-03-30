package taskslist.views

import PREFS_NAME
import TASK_FEN_PARAMETER
import TASK_ID_PARAMETER
import TASK_PGN_PARAMETER
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.NavHostFragment
import core.model.task.ChessTask
import core.model.task.ChessTaskFullData
import core.model.task.ChessTaskShortData
import kotlinx.android.synthetic.main.fragment_tasks_list.*
import network.api.SingleTaskApi
import network.api.TasksListApi
import repository.LoggedUserRepository
import sample.R
import singletask.views.SingleTaskFragment
import taskslist.SelectedTaskCallback
import taskslist.VoidCallback
import taskslist.model.enum.TasksListDestinationId
import taskslist.model.enum.TasksListMessageId
import taskslist.presenters.TasksListPresenter
import taskslist.reducers.TasksListReducer

class TasksListFragment() : Fragment(), TasksListView {
    override var selectedTaskCallback: SelectedTaskCallback? = null
    override var logoutCallback: VoidCallback? = null

    private var listAdapter: TasksListAdapter? = null
    private var presenter: TasksListPresenter? = null

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_tasks_list, container, false)
    }

    override fun onDestroy() {
        super.onDestroy()
        presenter?.detachView()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val loggedUserRepository = LoggedUserRepository(
            context!!.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
        )
        val reducer = TasksListReducer(loggedUserRepository, TasksListApi(), SingleTaskApi())
        presenter = TasksListPresenter(reducer)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        logoutButton.setOnClickListener {
            logoutCallback?.invoke()
        }

        listAdapter = TasksListAdapter()
        listAdapter?.rowClickCallback = {
            selectedTaskCallback?.invoke(it.id)
        }

        tasksList.layoutManager = androidx.recyclerview.widget.LinearLayoutManager(context)
        tasksList.adapter = listAdapter

        presenter?.attachView(this)
        presenter?.refreshTasks()
    }

    override fun displayMessage(newsMessage: TasksListMessageId) {
        activity?.runOnUiThread {
            Toast.makeText(context!!, newsMessage.name, Toast.LENGTH_LONG).show()
        }
    }

    override fun navigateTo(destination: TasksListDestinationId) {
        activity?.runOnUiThread {
            when(destination) {
                TasksListDestinationId.LOGIN_SCREEN -> {
                    NavHostFragment
                        .findNavController(this)
                        .navigate(R.id.action_tasksListFragment_to_loginFragment)
                }
                TasksListDestinationId.SINGLE_TASK -> {
                    NavHostFragment
                        .findNavController(this)
                        .popBackStack()
                }
            }
        }
    }

    override fun setLoadingVisibility(visible: Boolean) {
        activity?.runOnUiThread {
            if (visible) {
                progressBar.visibility = View.VISIBLE
            } else {
                progressBar.visibility = View.INVISIBLE
            }
        }
    }

    override fun updateTasksList(list: List<ChessTaskShortData>) {
        activity?.runOnUiThread {
            listAdapter?.tasks = list
        }
    }

    override fun loadedTaskReady(task: ChessTask) {
        SingleTaskFragment.selectedTask = task
        NavHostFragment
            .findNavController(this)
            .navigate(R.id.action_tasksListFragment_to_singleTaskFragment)
    }
}