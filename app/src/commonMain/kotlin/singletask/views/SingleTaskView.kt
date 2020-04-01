package singletask.views

import core.model.task.figure.FigurePosition
import singletask.SelectCellCallback
import singletask.SelectFigureCallback
import singletask.VoidCallback
import singletask.model.board.BoardAction
import singletask.model.figure.ChessFigureOnBoard

interface SingleTaskView {
    var selectFigureCallback: SelectFigureCallback?
    var selectCellCallback: SelectCellCallback?
    var exitButtonCallback: VoidCallback?
    var restartButtonCallback: VoidCallback?
    var undoButtonCallback: VoidCallback?

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