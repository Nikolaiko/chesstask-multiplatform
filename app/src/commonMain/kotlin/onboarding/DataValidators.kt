package onboarding

import core.model.user.AuthorizationUserData

const val MIN_EMAIL_LENGTH: Int = 3

fun isUserDataCorrect(data: AuthorizationUserData): Boolean {
    return data.email.length >= MIN_EMAIL_LENGTH && data.password.isNotEmpty()
}