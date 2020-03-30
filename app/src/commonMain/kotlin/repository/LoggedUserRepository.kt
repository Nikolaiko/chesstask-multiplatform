package repository

import core.model.user.UserToken

expect class LoggedUserRepository {
    fun setLoggedUserTokens(tokens: UserToken)
    fun getLoggedUserTokens(): UserToken?
    fun logout()
}