package repository

import android.content.SharedPreferences
import core.model.user.UserToken

actual class LoggedUserRepository(private val sharedPreferences: SharedPreferences) {
    companion object {
        private const val USER_NAME_ACCESS_TOKEN: String = "logged_user_access_token"
        private const val DEFAULT_STRING_VALUE: String = ""
    }

    private var loggedUserTokens: UserToken? = null

    actual fun setLoggedUserTokens(tokens: UserToken) {
        loggedUserTokens = tokens
        val editor: SharedPreferences.Editor = sharedPreferences.edit()

        editor.putString(USER_NAME_ACCESS_TOKEN, tokens.token)
        editor.apply()
    }

    actual fun getLoggedUserTokens(): UserToken? {
        if (loggedUserTokens == null) {
            loggedUserTokens = tryGetSavedUserTokens()
        }
        return loggedUserTokens
    }

    actual fun logout() {
        loggedUserTokens = null
        sharedPreferences.edit()
            .remove(USER_NAME_ACCESS_TOKEN)
            .apply()
    }

    private fun tryGetSavedUserTokens(): UserToken? {
        var tokens: UserToken? = null
        val userToken: String = sharedPreferences.getString(
            USER_NAME_ACCESS_TOKEN,
            DEFAULT_STRING_VALUE
        ) ?: DEFAULT_STRING_VALUE

        if (userToken != DEFAULT_STRING_VALUE) {
            tokens = UserToken(userToken)
        }
        return tokens
    }
}