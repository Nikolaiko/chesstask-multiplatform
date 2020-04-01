package singletask.factories

import android.content.Context
import android.widget.ImageView
import core.model.task.figure.ChessFigureColor
import core.model.task.figure.ChessFigureType
import sample.R

class ChessViewFactory (
    private val context: Context
) {
    fun buildFigure(type: ChessFigureType, color: ChessFigureColor): ImageView {
        val pieceImage = ImageView(context)
        pieceImage.setImageResource(getResource(type, color))
        return pieceImage
    }

    private fun getResource(type: ChessFigureType, color: ChessFigureColor) = when(color) {
        ChessFigureColor.WHITE -> getWhiteResource(type)
        ChessFigureColor.BLACK -> getBlackResource(type)
    }

    private fun getBlackResource(type: ChessFigureType) = when(type) {
        ChessFigureType.PAWN -> R.drawable.svg_black_pawn
        ChessFigureType.KNIGHT -> R.drawable.svg_black_knight
        ChessFigureType.ROCK -> R.drawable.svg_black_rock
        ChessFigureType.BISHOP -> R.drawable.svg_black_bishop
        ChessFigureType.KING -> R.drawable.svg_black_king
        ChessFigureType.QUEEN -> R.drawable.svg_black_queen
    }

    private fun getWhiteResource(type: ChessFigureType) = when(type) {
        ChessFigureType.PAWN -> R.drawable.svg_white_pawn
        ChessFigureType.KNIGHT -> R.drawable.svg_white_knight
        ChessFigureType.ROCK -> R.drawable.svg_white_rock
        ChessFigureType.BISHOP -> R.drawable.svg_white_bishop
        ChessFigureType.KING -> R.drawable.svg_white_king
        ChessFigureType.QUEEN -> R.drawable.svg_white_queen
    }
}
