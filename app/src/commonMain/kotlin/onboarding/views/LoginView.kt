package onboarding.views

import onboarding.AuthDataChangeCallback
import onboarding.VoidCallback
import onboarding.model.enums.OnBoardingDestinationId
import onboarding.model.enums.LoginMessageId

interface LoginView {
    fun setRegisterButtonEnabled(isEnabled:Boolean)
    fun setLoginButtonEnabled(isEnabled:Boolean)
    fun setPasswordTextEnabled(isEnabled:Boolean)
    fun setLoginTextEnabled(isEnabled:Boolean)
    fun setLoading(isLoading:Boolean)

    fun displayMessage(messageId: LoginMessageId)
    fun navigateTo(destination: OnBoardingDestinationId)

    var registerCallback: VoidCallback?
    var loginCallback: VoidCallback?
    var credentialsChangeCallback: AuthDataChangeCallback?
}