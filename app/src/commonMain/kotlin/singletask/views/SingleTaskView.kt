package singletask.views

import core.model.task.figure.FigurePosition
import singletask.model.board.BoardAction
import singletask.model.figure.ChessFigureOnBoard

interface SingleTaskView {
//    val selectedFigureId: Observable<String>
//    val selectedCell: Observable<FigurePosition>
//    val exitButton: Observable<Unit>
//    val restartButton: Observable<Unit>
//    val undoButton: Observable<Unit>

    fun showWrongFigureMessage()
    fun showSolutionText()
    fun hideOpenSolutionButton()
    fun updateChessBoardSelection(selectedCells: List<FigurePosition>)
    fun updateChessBoardPosition(position: List<ChessFigureOnBoard>)
    fun applyAction(action: BoardAction)
    fun showWrongMoveDialog()
    fun showWinDialog()
    fun closeView()
}