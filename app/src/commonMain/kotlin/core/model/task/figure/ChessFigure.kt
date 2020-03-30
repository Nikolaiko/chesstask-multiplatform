package core.model.task.figure

data class ChessFigure(
    val figureType: ChessFigureType,
    val color: ChessFigureColor,
    val position: FigurePosition
)