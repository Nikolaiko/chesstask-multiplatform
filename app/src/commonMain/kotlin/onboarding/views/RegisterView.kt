package onboarding.views

import onboarding.AuthDataChangeCallback
import onboarding.VoidCallback
import onboarding.model.enums.LoginMessageId
import onboarding.model.enums.OnBoardingDestinationId

interface RegisterView {
    fun setRegisterButtonEnabled(isEnabled:Boolean)
    fun setBackButtonEnabled(isEnabled:Boolean)
    fun setPasswordTextEnabled(isEnabled:Boolean)
    fun setLoginTextEnabled(isEnabled:Boolean)
    fun setLoading(isLoading:Boolean)

    fun displayMessage(messageId: LoginMessageId)
    fun navigateTo(destination: OnBoardingDestinationId)

    var registerCallback: VoidCallback?
    var backCallback: VoidCallback?
    var credentialsChangeCallback: AuthDataChangeCallback?
}