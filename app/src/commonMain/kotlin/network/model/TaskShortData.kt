package network.model

import kotlinx.serialization.Serializable

@Serializable
data class TaskShortData(
    val id: Int,
    val name: String
)