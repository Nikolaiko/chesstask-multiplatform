package singletask.model.figure

import android.widget.ImageView
import core.model.task.figure.ChessFigureType
import core.model.task.figure.FigurePosition

data class ChessFigureView(
    val id: String,
    val imageView: ImageView,
    val position: FigurePosition,
    val type: ChessFigureType
)
