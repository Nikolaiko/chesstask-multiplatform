package onboarding.presenters

import core.model.AuthorizationUserData
import onboarding.model.enums.LoginDestinationId
import onboarding.model.enums.LoginMessageId
import onboarding.model.enums.LoginNewsId
import onboarding.reducers.LoginReducer
import onboarding.views.LoginView

class LoginPresenter(
    private val reducer: LoginReducer
) {
    private var view: LoginView? = null

    fun attachView(presenterView: LoginView) {
        view = presenterView
        bindToView()
    }

    fun detachView() {
        view = null
    }

    private fun bindToView() {
        view?.credentialsChangeCallback = {
            reducer.authorizationDataChange(AuthorizationUserData(it.first(), it.last()))
        }

        view?.loginCallback = {
            reducer.tryToLoading()
        }

        view?.registerCallback = {
            reducer.moveToRegister()
        }

        reducer.newsCallback = {
            when(it) {
                LoginNewsId.REQUEST_EXCEPTION -> view?.displayMessage(LoginMessageId.REQUEST_EXCEPTION)
                LoginNewsId.NAVIGATE_TO_REGISTER -> view?.navigateTo(LoginDestinationId.REGISTER_SCREEN)
                LoginNewsId.NAVIGATE_TO_TASKS_LIST -> view?.navigateTo(LoginDestinationId.TASKS_LIST_SCREEN)
            }
        }

        reducer.updateStateCallback = {
            view?.setLoading(it.loadingActive)
            view?.setLoginButtonEnabled(it.loginButtonEnabled)
            view?.setLoginTextEnabled(it.loginTextFieldEnabled)
            view?.setPasswordTextEnabled(it.passwordTextField)
            view?.setRegisterButtonEnabled(it.registrationButtonEnabled)
        }
    }
}