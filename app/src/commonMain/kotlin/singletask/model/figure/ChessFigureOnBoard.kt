package singletask.model.figure

import com.benasher44.uuid.uuid4
import core.model.task.figure.ChessFigure
import core.model.task.figure.ChessFigureColor
import core.model.task.figure.ChessFigureType
import core.model.task.figure.FigurePosition

data class ChessFigureOnBoard(
    val id:String,
    val color: ChessFigureColor,
    val position: FigurePosition,
    val figureType: ChessFigureType
) {
    companion object {
        fun convert(from: ChessFigure): ChessFigureOnBoard {
            return ChessFigureOnBoard(
                uuid4().toString(),
                from.color,
                from.position,
                from.figureType
            )
        }
    }
}
