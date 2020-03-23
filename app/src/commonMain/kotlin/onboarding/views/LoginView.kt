package onboarding.views

import onboarding.AuthDataChangeCallback
import onboarding.VoidCallback

interface LoginView {
    fun setRegisterButtonEnabled(isEnabled:Boolean)
    fun setLoginButtonEnabled(isEnabled:Boolean)
    fun setPasswordTextEnabled(isEnabled:Boolean)
    fun setLoginTextEnabled(isEnabled:Boolean)
    fun setLoading(isLoading:Boolean)

    fun registerClickCallback(callback: VoidCallback)
    fun loginClick(callback: VoidCallback)
    fun credentialsChange(callback: AuthDataChangeCallback)
}