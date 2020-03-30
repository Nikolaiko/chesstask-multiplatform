package core.model.task.move

import core.model.task.move.PgnMove

data class PgnMovePair (
    val whiteMove: PgnMove?,
    val blackMove: PgnMove? = null
)
