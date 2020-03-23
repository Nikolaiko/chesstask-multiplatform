package onboarding.reducers

import network.api.UserApi
import repository.LoggedUserRepository

class LoginReducer(
    val loggedUserRepository: LoggedUserRepository,
    val userApi: UserApi
) {

}