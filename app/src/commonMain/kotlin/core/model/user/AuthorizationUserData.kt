package core.model.user

import kotlinx.serialization.Serializable

@Serializable
data class AuthorizationUserData(
    val email: String,
    val password: String
)