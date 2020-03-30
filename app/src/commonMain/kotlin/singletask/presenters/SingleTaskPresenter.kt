package singletask.presenters

import core.model.task.ChessTask
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

    private fun bindToView() {
        reducer.boardPositionCallback = {
            view?.updateChessBoardPosition(it)
        }
    }
}