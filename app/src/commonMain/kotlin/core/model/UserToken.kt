package core.model

import kotlinx.serialization.Serializable

@Serializable
data class UserToken (
    val accessToken: String
)