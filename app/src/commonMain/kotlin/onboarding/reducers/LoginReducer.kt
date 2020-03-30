package onboarding.reducers

import core.model.user.AuthorizationUserData
import network.api.UserApi
import onboarding.NewsCallback
import onboarding.LoginStateChangeCallback
import onboarding.isUserDataCorrect
import onboarding.model.enums.OnBoardingNewsId
import onboarding.model.LoginState
import repository.LoggedUserRepository

class LoginReducer(
    private val loggedUserRepository: LoggedUserRepository,
    private val userApi: UserApi
) {
    var updateStateCallback: LoginStateChangeCallback? = null
    var newsCallback: NewsCallback? = null

    private var userAuthorizationUserData = AuthorizationUserData("", "")
    private var loginState = LoginState()

    fun authorizationDataChange(data: AuthorizationUserData) {
        userAuthorizationUserData = data
        loginState = loginState.copy(loginButtonEnabled = isUserDataCorrect(userAuthorizationUserData))
        updateStateCallback?.invoke(loginState)
    }

    fun tryToLoading() {
        userApi.loginUser(userAuthorizationUserData, {
            loggedUserRepository.setLoggedUserTokens(it)
            newsCallback?.invoke(OnBoardingNewsId.NAVIGATE_TO_TASKS_LIST)
        }, {
            println(it.message)
            newsCallback?.invoke(OnBoardingNewsId.REQUEST_EXCEPTION)
            loginState = LoginState(loginButtonEnabled = true)
            updateStateCallback?.invoke(loginState)
        })
        loginState = LoginState(false,
            registrationButtonEnabled = false,
            loadingActive = true,
            loginTextFieldEnabled = false,
            passwordTextField = false
        )
        updateStateCallback?.invoke(loginState)
    }

    fun moveToRegister() {
        newsCallback?.invoke(OnBoardingNewsId.NAVIGATE_TO_REGISTER)
    }
}