package onboarding.presenters

import core.model.user.AuthorizationUserData
import onboarding.model.enums.OnBoardingDestinationId
import onboarding.model.enums.LoginMessageId
import onboarding.model.enums.OnBoardingNewsId
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
            reducer.authorizationDataChange(
                AuthorizationUserData(
                    it.first(),
                    it.last()
                )
            )
        }

        view?.loginCallback = {
            reducer.tryToLoading()
        }

        view?.registerCallback = {
            reducer.moveToRegister()
        }

        reducer.newsCallback = {
            when(it) {
                OnBoardingNewsId.REQUEST_EXCEPTION -> view?.displayMessage(LoginMessageId.REQUEST_EXCEPTION)
                OnBoardingNewsId.NAVIGATE_TO_REGISTER -> view?.navigateTo(OnBoardingDestinationId.REGISTER_SCREEN)
                OnBoardingNewsId.NAVIGATE_TO_TASKS_LIST -> view?.navigateTo(OnBoardingDestinationId.TASKS_LIST_SCREEN)
                OnBoardingNewsId.NAVIGATE_TO_LOGIN -> view?.navigateTo(OnBoardingDestinationId.UNKNOWN_DESTINATION)
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