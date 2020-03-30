package singletask.reducers

import core.model.task.ChessTask
import singletask.ChessBoardPositionCallback
import singletask.model.board.ChessBoardState
import singletask.model.figure.ChessFigureOnBoard

class SingleTaskReducer {
    var boardPositionCallback: ChessBoardPositionCallback? = null

    private var chessTask: ChessTask? = null
    private var currentTurn = 0

    private val boardState = ChessBoardState()

    fun initChessTask(task: ChessTask) {
        chessTask = task
        currentTurn = 0

        for (currentFigure in task.startingPositions) {
            boardState.addFigureToBoard(ChessFigureOnBoard.convert(currentFigure))
        }
        boardPositionCallback?.invoke(boardState.getFigures())
        //chessTaskState = ChessTaskState.IN_PROGRESS
    }
}