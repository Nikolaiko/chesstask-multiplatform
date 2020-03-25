package main

import PREFS_NAME
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.NavHostFragment
import core.model.UserToken
import repository.LoggedUserRepository
import sample.R

class MainFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_main, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        checkPreviousLogin()
    }

    private fun checkPreviousLogin() {
        val loggedDataManager = LoggedUserRepository(context!!.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE))
        val loggedUserTokens: UserToken? = loggedDataManager.getLoggedUserTokens()

        if (loggedUserTokens == null) {
            NavHostFragment
                .findNavController(this)
                .navigate(R.id.action_mainFragment_to_loginFragment)
        } else {
            //tasksListMediator.createTasksListActivity(this)
            //finish()
        }
    }
}