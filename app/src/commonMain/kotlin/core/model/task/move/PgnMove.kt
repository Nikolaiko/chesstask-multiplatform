package core.model.task.move

import core.model.task.figure.ChessFigureColor
import core.model.task.figure.ChessFigureType
import core.model.task.figure.FigurePosition

data class PgnMove (
    val figureType: ChessFigureType,
    val figureColor: ChessFigureColor,
    val destination: FigurePosition,
    val start: FigurePosition?,
    val takeOppositeFigure: Boolean = false,
    val promotedFigure: ChessFigureType? = null
)
