package core.model.user

import kotlinx.serialization.Serializable

@Serializable
data class UserToken (
    val token: String
)