package onboarding.presenters

import core.model.user.AuthorizationUserData
import onboarding.model.enums.LoginMessageId
import onboarding.model.enums.OnBoardingDestinationId
import onboarding.model.enums.OnBoardingNewsId
import onboarding.reducers.RegisterReducer
import onboarding.views.RegisterView

class RegisterPresenter(
    private val reducer: RegisterReducer
) {
    private var view: RegisterView? = null

    fun attachView(presenterView: RegisterView) {
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

        view?.registerCallback = {
            reducer.tryToRegister()
        }

        view?.backCallback = {
            reducer.moveToLogin()
        }

        reducer.newsCallback = {
            when(it) {
                OnBoardingNewsId.REQUEST_EXCEPTION -> view?.displayMessage(LoginMessageId.REQUEST_EXCEPTION)
                OnBoardingNewsId.NAVIGATE_TO_REGISTER -> view?.navigateTo(OnBoardingDestinationId.UNKNOWN_DESTINATION)
                OnBoardingNewsId.NAVIGATE_TO_TASKS_LIST -> view?.navigateTo(OnBoardingDestinationId.TASKS_LIST_SCREEN)
                OnBoardingNewsId.NAVIGATE_TO_LOGIN -> view?.navigateTo(OnBoardingDestinationId.LOGIN_SCREEN)
            }
        }

        reducer.updateStateCallback = {
            view?.setLoading(it.loadingActive)
            view?.setBackButtonEnabled(it.backButtonEnabled)
            view?.setLoginTextEnabled(it.loginTextFieldEnabled)
            view?.setPasswordTextEnabled(it.passwordTextField)
            view?.setRegisterButtonEnabled(it.registrationButtonEnabled)
        }
    }
}