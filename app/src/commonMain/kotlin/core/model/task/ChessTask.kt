package core.model.task

import core.model.task.figure.ChessFigure
import core.model.task.figure.ChessFigureColor
import core.model.task.move.PgnMovePair

data class ChessTask(
    val id: Int,
    val startingPositions: List<ChessFigure>,
    val activeColor: ChessFigureColor,
    val pgnMoves: List<PgnMovePair>
)
