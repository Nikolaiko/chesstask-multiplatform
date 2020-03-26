package onboarding.views

import PREFS_NAME
import android.content.Context
import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.NavHostFragment
import kotlinx.android.synthetic.main.fragment_login.*
import kotlinx.android.synthetic.main.fragment_register.*
import kotlinx.android.synthetic.main.fragment_register.emailText
import kotlinx.android.synthetic.main.fragment_register.passwordText
import kotlinx.android.synthetic.main.fragment_register.progressBar
import kotlinx.android.synthetic.main.fragment_register.registerButton
import network.api.UserApi
import onboarding.AuthDataChangeCallback
import onboarding.VoidCallback
import onboarding.model.enums.LoginMessageId
import onboarding.model.enums.OnBoardingDestinationId
import onboarding.presenters.LoginPresenter
import onboarding.presenters.RegisterPresenter
import onboarding.reducers.LoginReducer
import onboarding.reducers.RegisterReducer
import repository.LoggedUserRepository
import sample.R

class RegisterFragment() : Fragment(), RegisterView {
    override var registerCallback: VoidCallback? = null
    override var backCallback: VoidCallback? = null
    override var credentialsChangeCallback: AuthDataChangeCallback? = null

    private var presenter: RegisterPresenter? = null

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_register, container, false)
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
        val reducer = RegisterReducer(loggedUserRepository, UserApi())
        presenter = RegisterPresenter(reducer)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        backButton.setOnClickListener {
            backCallback?.invoke()
        }

        registerButton.setOnClickListener {
            registerCallback?.invoke()
        }

        emailText.addTextChangedListener( object : TextWatcher {
            override fun afterTextChanged(p0: Editable?) {
                credentialsChangeCallback?.invoke(listOf(emailText.text.toString(), passwordText.text.toString()))
            }
            override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {}
            override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {}
        })

        passwordText.addTextChangedListener( object : TextWatcher {
            override fun afterTextChanged(p0: Editable?) {
                credentialsChangeCallback?.invoke(listOf(emailText.text.toString(), passwordText.text.toString()))
            }
            override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {}
            override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {}
        })

        backButton.setOnClickListener {
            NavHostFragment
                .findNavController(this)
                .popBackStack()
        }
        presenter?.attachView(this)
    }

    override fun setRegisterButtonEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            registerButton.isEnabled = isEnabled
        }
    }

    override fun setBackButtonEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            backButton.isEnabled = isEnabled
        }
    }

    override fun setPasswordTextEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            passwordText.isEnabled = isEnabled
        }
    }

    override fun setLoginTextEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            emailText.isEnabled = isEnabled
        }
    }

    override fun setLoading(isLoading: Boolean) {
        activity?.runOnUiThread {
            if (isLoading) {
                progressBar.visibility = View.VISIBLE
            } else {
                progressBar.visibility = View.INVISIBLE
            }
        }
    }

    override fun displayMessage(messageId: LoginMessageId) {
        activity?.runOnUiThread {
            Toast.makeText(context!!, messageId.name, Toast.LENGTH_LONG).show()
        }
    }

    override fun navigateTo(destination: OnBoardingDestinationId) {
        when(destination) {
            OnBoardingDestinationId.LOGIN_SCREEN -> {
                NavHostFragment
                    .findNavController(this)
                    .popBackStack()
            }
            OnBoardingDestinationId.TASKS_LIST_SCREEN -> {
                NavHostFragment
                    .findNavController(this)
                    .navigate(R.id.action_registerFragment_to_tasksListFragment)
            }
            else -> {
                displayMessage(LoginMessageId.UNKNOWN_DESTINATION)
            }
        }
    }
}