package onboarding

import onboarding.model.enums.LoginNewsId
import onboarding.model.LoginState

typealias VoidCallback = () -> Unit
typealias AuthDataChangeCallback = (List<String>) -> Unit
typealias StateChangeCallback = (LoginState) -> Unit
typealias NewsCallback = (LoginNewsId) -> Unit