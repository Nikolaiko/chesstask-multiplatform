package core.parsers

import core.model.task.figure.ChessFigure
import core.model.task.figure.ChessFigureColor
import core.model.task.figure.ChessFigureType
import core.model.task.figure.FigurePosition

fun getStartingColor(fenString:String?): ChessFigureColor {
    return if (fenString?.isNotBlank() == true) {
        val secondPart = fenString.split(' ')[1]
        when(secondPart[0].toString()) {
            "b" -> ChessFigureColor.BLACK
            else -> ChessFigureColor.WHITE
        }
    } else {
        ChessFigureColor.WHITE
    }
}

fun getStartingPositions(fenString:String?):List<ChessFigure> {
    val startingPositions = mutableListOf<ChessFigure>()
    if (fenString?.isNotBlank() == true) {
        val firstPart = fenString.split(' ')[0]
        val rows = firstPart.split('/')

        var rowIndex = 0
        for (currentRow in rows) {
            var currentColumn:Int = 0
            for (currentChar: Char in currentRow) {
                if (currentChar in '0'..'9') {
                    val skipCount = currentChar.toString().toInt()
                    currentColumn += skipCount
                } else {
                    val figureColor = getColorFromFigureChar(currentChar)
                    val lowerCased = currentChar.toLowerCase()
                    val figureType = getFigureTypeFromChar(lowerCased)
                    val figurePosition = FigurePosition(rowIndex, currentColumn)

                    startingPositions.add(ChessFigure(figureType, figureColor, figurePosition))
                    currentColumn += 1
                }
            }
            rowIndex += 1
        }
    }
    return startingPositions
}

private fun getColorFromFigureChar(figureChar: Char): ChessFigureColor {
    return when(figureChar.toLowerCase().equals(figureChar, false)) {
        true -> ChessFigureColor.BLACK
        false -> ChessFigureColor.WHITE
    }
}

private fun getFigureTypeFromChar(figureChar: Char): ChessFigureType = when(figureChar.toLowerCase()) {
    'k' -> ChessFigureType.KING
    'q' -> ChessFigureType.QUEEN
    'r' -> ChessFigureType.ROCK
    'n' -> ChessFigureType.KNIGHT
    'b' -> ChessFigureType.BISHOP
    'p' -> ChessFigureType.PAWN
    else -> ChessFigureType.PAWN
}