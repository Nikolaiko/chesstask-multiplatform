package onboarding

import onboarding.model.enums.OnBoardingNewsId
import onboarding.model.LoginState
import onboarding.model.RegistrationState

typealias VoidCallback = () -> Unit
typealias AuthDataChangeCallback = (List<String>) -> Unit
typealias LoginStateChangeCallback = (LoginState) -> Unit
typealias RegisterStateChangeCallback = (RegistrationState) -> Unit
typealias NewsCallback = (OnBoardingNewsId) -> Unit