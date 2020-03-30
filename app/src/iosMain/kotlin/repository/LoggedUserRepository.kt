package repository

import core.model.user.UserToken

actual class LoggedUserRepository {
    actual fun setLoggedUserTokens(tokens: UserToken) {
    }

    actual fun getLoggedUserTokens(): UserToken? {
        return null
    }

    actual fun logout() {
    }
}