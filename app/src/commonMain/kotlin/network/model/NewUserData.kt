package network.model

import kotlinx.serialization.Serializable

@Serializable
data class NewUserData(
    val id: Int,
    val email: String,
    val joined_at: Int
)