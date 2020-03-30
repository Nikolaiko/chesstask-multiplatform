package singletask.model.board

import singletask.model.figure.ChessFigureOnBoard
import core.model.task.figure.FigurePosition

data class BoardAction(
    val figure: ChessFigureOnBoard,
    val startPosition: FigurePosition,
    val endPosition: FigurePosition,
    val removedFigure: ChessFigureOnBoard? = null,
    val promotedFigure: ChessFigureOnBoard? = null,
    val addedFigure: ChessFigureOnBoard? = null
) {
    fun reverse(): BoardAction = BoardAction(
        figure,
        endPosition,
        startPosition,
        null,
        figure.copy(figureType = promotedFigure?.figureType ?: figure.figureType),
        removedFigure
    )
}
