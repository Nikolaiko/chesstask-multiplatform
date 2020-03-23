package repository

import core.model.UserToken

expect class LoggedUserRepository {
    fun setLoggedUserTokens(tokens: UserToken)
    fun getLoggedUserTokens(): UserToken?
    fun logout()
}