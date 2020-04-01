package singletask.reducers

import core.model.task.ChessTask
import core.model.task.figure.ChessFigureColor
import core.model.task.figure.FigurePosition
import singletask.BoardActionCallback
import singletask.BoardCellsSelectedUpdateCallback
import singletask.ChessBoardPositionCallback
import singletask.SingleTaskNewsCallback
import singletask.model.SingleTaskNewsId
import singletask.model.board.BoardAction
import singletask.model.board.ChessBoardState
import singletask.model.figure.ChessFigureOnBoard

class SingleTaskReducer {
    var boardPositionCallback: ChessBoardPositionCallback? = null
    var newsCallback: SingleTaskNewsCallback? = null
    var actionCallback: BoardActionCallback? = null
    var selectedCellsUpdateCallback: BoardCellsSelectedUpdateCallback? = null


    private val availableForMoveCells: MutableList<FigurePosition> = mutableListOf()
    private var chessTask: ChessTask? = null
    private var selectedFigureId: String? = null
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

    fun selectCellAt(position: FigurePosition) {
        if (isCellAvailable(position)) {
            makeMoveAndCheck(position)
        }
    }

    fun selectFigureById(figureId: String) {
        val selectedFigure = boardState.getFigureById(figureId)
        if (selectedFigure != null) {
            if (selectedFigure.color == chessTask?.activeColor && figureId != selectedFigureId) {
                updateSelectedFigure(figureId)
            } else {
                if (isCellAvailable(selectedFigure.position)) {
                    makeMoveAndCheck(selectedFigure.position, selectedFigure)
                }
            }
        } else {
            newsCallback?.invoke(SingleTaskNewsId.CANT_FIND_FIGURE_BY_ID)
        }
    }

    fun openSolution() {
        newsCallback?.invoke(SingleTaskNewsId.OPEN_SOLUTION)
    }

    fun undoLastMove() {
        selectedFigureId = null

        val reversed = boardState.undoLastAction()
        if (reversed != null) {
            actionCallback?.invoke(reversed)
        }
    }

    fun restartTask() {
        currentTurn = 0
        boardState.clearState()
        for (currentFigure in chessTask!!.startingPositions) {
            boardState.addFigureToBoard(ChessFigureOnBoard.convert(currentFigure))
        }
        boardPositionCallback?.invoke(boardState.getFigures())
        ///chessTaskState = ChessTaskState.IN_PROGRESS
    }

    fun exitTask() {
        newsCallback?.invoke(SingleTaskNewsId.GAME_FINISHED)
        //chessTaskState = ChessTaskState.LOST
    }

    private fun updateSelectedFigure(id: String) {
        selectedFigureId = id
        availableForMoveCells.clear()
        availableForMoveCells.addAll(boardState.getAvailableCellsForFigure(selectedFigureId!!))
        selectedCellsUpdateCallback?.invoke(availableForMoveCells)
    }

    private fun isCellAvailable(position: FigurePosition): Boolean {
        var available = false
        for (cell in availableForMoveCells) {
            if (cell == position) {
                available = true
                break
            }
        }
        return available
    }

    private fun makeMoveAndCheck(destination:FigurePosition,
                                 attackedFigure: ChessFigureOnBoard? = null) {
        makeMove(destination, attackedFigure)
        if (isMoveCorrect(destination)) {
            makeAIMove()
            currentTurn += 1
            checkTaskFinish()
        } else {
            newsCallback?.invoke(SingleTaskNewsId.WRONG_MOVE)
        }
    }

    private fun makeMove(destination:FigurePosition,
                         attackedFigure: ChessFigureOnBoard? = null) {
        val activeFigure = boardState.getFigureById(selectedFigureId!!)!!
        val action = BoardAction(
            activeFigure,
            activeFigure.position,
            destination,
            attackedFigure
        )
        boardState.applyAction(action)
        actionCallback?.invoke(action)
    }

    private fun isMoveCorrect(position: FigurePosition): Boolean {
        val currentPgnMove = when(chessTask!!.activeColor) {
            ChessFigureColor.WHITE -> chessTask!!.pgnMoves[currentTurn].whiteMove
            ChessFigureColor.BLACK -> chessTask!!.pgnMoves[currentTurn].blackMove
        }
        return position == currentPgnMove?.destination
    }

    private fun checkTaskFinish() {
        if (currentTurn == chessTask!!.pgnMoves.size) {
            //chessTaskState = ChessTaskState.WON
            newsCallback?.invoke(SingleTaskNewsId.GAME_WON)
        }
    }

    private fun makeAIMove() {
        val aiMove = when(chessTask!!.activeColor) {
            ChessFigureColor.WHITE -> chessTask!!.pgnMoves[currentTurn].blackMove
            ChessFigureColor.BLACK -> chessTask!!.pgnMoves[currentTurn].whiteMove
        }

        if (aiMove != null) {
            val figure = boardState.getFigureByPgnMove(aiMove)
            if (figure != null) {
                var attackedFigure:ChessFigureOnBoard? = null
                if (aiMove.takeOppositeFigure) {
                    attackedFigure = boardState.getFigureByPosition(aiMove.destination)
                }
                val action = BoardAction(
                    figure,
                    figure.position,
                    aiMove.destination,
                    attackedFigure
                )
                boardState.applyAction(action)
                actionCallback?.invoke(action)
            }
        }
    }
}