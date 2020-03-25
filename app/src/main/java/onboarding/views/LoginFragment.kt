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
import androidx.core.widget.addTextChangedListener
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.NavHostFragment
import kotlinx.android.synthetic.main.fragment_login.*
import network.api.UserApi
import onboarding.AuthDataChangeCallback
import onboarding.VoidCallback
import onboarding.model.enums.LoginDestinationId
import onboarding.model.enums.LoginMessageId
import onboarding.presenters.LoginPresenter
import onboarding.reducers.LoginReducer
import repository.LoggedUserRepository
import sample.R

class LoginFragment : Fragment(), LoginView {
    private var presenter: LoginPresenter? = null

    override var registerCallback: VoidCallback? = null
    override var loginCallback: VoidCallback? = null
    override var credentialsChangeCallback: AuthDataChangeCallback? = null

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_login, container, false)
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val loggedUserRepository = LoggedUserRepository(
            context!!.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
        )
        val reducer = LoginReducer(loggedUserRepository, UserApi())
        presenter = LoginPresenter(reducer)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        loginButton.setOnClickListener {
            loginCallback?.invoke()
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

        presenter?.attachView(this)
    }

    override fun setRegisterButtonEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            registerButton.isEnabled = isEnabled
        }
    }

    override fun setLoginButtonEnabled(isEnabled: Boolean) {
        activity?.runOnUiThread {
            loginButton.isEnabled = isEnabled
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
            when(isLoading) {
                true -> progressBar.visibility = View.VISIBLE
                false -> progressBar.visibility = View.INVISIBLE
            }
        }
    }

    override fun displayMessage(messageId: LoginMessageId) {
        activity?.runOnUiThread {
            Toast.makeText(context!!, messageId.name, Toast.LENGTH_LONG).show()
        }
    }

    override fun navigateTo(destination: LoginDestinationId) {
        NavHostFragment
            .findNavController(this)
            .navigate(R.id.action_loginFragment_to_registerFragment)
    }
}