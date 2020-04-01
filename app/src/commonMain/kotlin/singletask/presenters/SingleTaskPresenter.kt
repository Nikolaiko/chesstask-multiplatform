package singletask.presenters

import core.model.task.ChessTask
import singletask.model.SingleTaskNewsId
import singletask.reducers.SingleTaskReducer
import singletask.views.SingleTaskView

class SingleTaskPresenter(
    private val reducer: SingleTaskReducer
) {
    private var view: SingleTaskView? = null

    fun attachView(presenterView: SingleTaskView) {
        view = presenterView
        bindToView()
    }

    fun detachView() {
        view = null
    }

    fun initTask(task: ChessTask) {
        reducer.initChessTask(task)
    }

    fun openSolution() {
        reducer.openSolution()
    }

    private fun bindToView() {
        reducer.boardPositionCallback = {
            view?.updateChessBoardPosition(it)
        }

        reducer.newsCallback = {
            processNews(it)
        }

        reducer.actionCallback = {
            view?.applyAction(it)
        }

        reducer.selectedCellsUpdateCallback = {
            view?.updateChessBoardSelection(it)
        }

        view?.selectCellCallback = {
            reducer.selectCellAt(it)
        }

        view?.selectFigureCallback = {
            reducer.selectFigureById(it)
        }

        view?.exitButtonCallback = {
            reducer.exitTask()
        }

        view?.restartButtonCallback = {
            reducer.restartTask()
        }

        view?.undoButtonCallback = {
            reducer.undoLastMove()
        }
    }

    private fun processNews(news: SingleTaskNewsId) {
        when(news) {
            SingleTaskNewsId.WRONG_MOVE -> view?.showWrongMoveDialog()
            SingleTaskNewsId.GAME_FINISHED -> view?.closeView()
            SingleTaskNewsId.GAME_WON -> view?.showWinDialog()
            SingleTaskNewsId.OPEN_SOLUTION -> {
                view?.showSolutionText()
                view?.hideOpenSolutionButton()
            }
            SingleTaskNewsId.CANT_FIND_FIGURE_BY_ID -> view?.showWrongFigureMessage()
        }
    }
}