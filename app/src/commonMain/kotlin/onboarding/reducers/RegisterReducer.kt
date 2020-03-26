package onboarding.reducers

import core.model.AuthorizationUserData
import network.api.UserApi
import onboarding.NewsCallback
import onboarding.RegisterStateChangeCallback
import onboarding.isUserDataCorrect
import onboarding.model.RegistrationState
import onboarding.model.enums.OnBoardingNewsId
import repository.LoggedUserRepository

class RegisterReducer(
    private val loggedUserRepository: LoggedUserRepository,
    private val userApi: UserApi
) {
    var updateStateCallback: RegisterStateChangeCallback? = null
    var newsCallback: NewsCallback? = null

    private var userAuthorizationUserData = AuthorizationUserData("", "")
    private var registrationState = RegistrationState()

    fun authorizationDataChange(data: AuthorizationUserData) {
        userAuthorizationUserData = data
        registrationState = registrationState.copy(registrationButtonEnabled = isUserDataCorrect(userAuthorizationUserData))
        updateStateCallback?.invoke(registrationState)
    }

    fun tryToRegister() {
        userApi.registerUser(userAuthorizationUserData, {
            loggedUserRepository.setLoggedUserTokens(it)
            newsCallback?.invoke(OnBoardingNewsId.NAVIGATE_TO_TASKS_LIST)
        }, {
            println(it.message)
            newsCallback?.invoke(OnBoardingNewsId.REQUEST_EXCEPTION)
            registrationState = RegistrationState(registrationButtonEnabled = true)
            updateStateCallback?.invoke(registrationState)
        })
        registrationState = RegistrationState(false,
            registrationButtonEnabled = false,
            loadingActive = true,
            loginTextFieldEnabled = false,
            passwordTextField = false
        )
        updateStateCallback?.invoke(registrationState)
    }

    fun moveToLogin() {
        newsCallback?.invoke(OnBoardingNewsId.NAVIGATE_TO_LOGIN)
    }
}