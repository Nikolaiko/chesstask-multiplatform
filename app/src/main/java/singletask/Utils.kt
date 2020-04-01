package singletask

import core.model.task.ChessTask
import core.model.task.figure.ChessFigureColor
import core.model.task.figure.FigurePosition
import core.model.task.move.PgnMove


fun getSolutionFromPgn(task: ChessTask): String {
    var stringSolution = ""
    for (currentMove in task.pgnMoves) {
        if (task.activeColor == ChessFigureColor.BLACK) {
            val currentString = pgnToString(currentMove.blackMove)
            stringSolution = "$stringSolution\n$currentString"
        } else {
            val currentString = pgnToString(currentMove.whiteMove)
            stringSolution = "$stringSolution\n$currentString"
        }
    }
    return stringSolution
}

private fun pgnToString(pgnMove: PgnMove?): String? {
    var result: String? = null
    if (pgnMove != null) {
        val startPosition = convertPositionToString(pgnMove.start)
        val destinationPosition = convertPositionToString(pgnMove.destination)
        if (startPosition != null) {
            result = "${pgnMove.figureType.name} - $startPosition:$destinationPosition"
        } else {
            result = "${pgnMove.figureType.name} - $destinationPosition"
        }
    }
    return result
}

private fun convertPositionToString(position: FigurePosition?): String? {
    var positionString: String? = null
    if (position != null) {
        positionString = "${getColumnString(position.column)}${getRowString(position.row)}"
    }
    return positionString
}

private fun getColumnString(column: Int): String = when(column) {
    0 -> "A"
    1 -> "B"
    2 -> "C"
    3 -> "D"
    4 -> "E"
    5 -> "F"
    6 -> "G"
    7 -> "H"
    else -> "unknown"
}

private fun getRowString(row: Int): String = when(row) {
    0 -> "1"
    1 -> "2"
    2 -> "3"
    3 -> "4"
    4 -> "5"
    5 -> "6"
    6 -> "7"
    7 -> "8"
    else -> "unknown"
}