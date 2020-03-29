package network.model

import kotlinx.serialization.Serializable

@Serializable
data class TaskFullData(
    val id: Int,
    val name: String,
    val pgn: String,
    val fen: String,
    val difficulty: String
)