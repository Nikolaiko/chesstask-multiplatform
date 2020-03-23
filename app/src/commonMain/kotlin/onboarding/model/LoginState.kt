package onboarding.model

class LoginState(
    val loginButtonEnabled:Boolean = false,
    val registrationButtonEnabled:Boolean = true,
    val loadingActive:Boolean = false,
    val loginTextFieldEnabled:Boolean = true,
    val passwordTextField:Boolean = true
)