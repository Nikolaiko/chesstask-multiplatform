package core.model

import kotlinx.serialization.Serializable

@Serializable
data class AuthorizationUserData(
    val email: String,
    val password: String
)