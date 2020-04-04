package repository

import core.model.user.UserToken
import platform.Foundation.NSBundle
import platform.Foundation.NSUserDefaults

actual class LoggedUserRepository {
    companion object {
        private const val ACCESS_TOKEN_KEY_NAME: String = "access_token_key"
    }

    private var loggedUserData: UserToken? = null

    actual fun setLoggedUserTokens(tokens: UserToken) {
        NSUserDefaults.standardUserDefaults.setObject(tokens.token, ACCESS_TOKEN_KEY_NAME)
        NSUserDefaults.standardUserDefaults.synchronize()

        if (loggedUserData == null) {
            loggedUserData = tokens
        }
    }

    actual fun getLoggedUserTokens(): UserToken? {
        if (loggedUserData == null) {
            loggedUserData = tryToGetUserData()
        }
        return loggedUserData
    }

    actual fun logout() {
        val bundleId:String? = NSBundle.mainBundle.bundleIdentifier
        if (bundleId != null) {
            NSUserDefaults.standardUserDefaults.removePersistentDomainForName(bundleId)
        }
    }

    private fun tryToGetUserData(): UserToken? {
        val accessToken: String = NSUserDefaults.standardUserDefaults.objectForKey(ACCESS_TOKEN_KEY_NAME) as? String ?: ""
        var userData: UserToken? = null

        if (!accessToken.isEmpty()) {
            userData = UserToken(accessToken)
        }
        return userData
    }
}