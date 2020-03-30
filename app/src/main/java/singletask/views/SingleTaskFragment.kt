package singletask.views

import TASK_FEN_PARAMETER
import TASK_ID_PARAMETER
import TASK_PGN_PARAMETER
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.view.ViewTreeObserver
import android.widget.ImageView
import androidx.constraintlayout.widget.ConstraintLayout
import androidx.fragment.app.Fragment
import core.model.task.ChessTask
import core.model.task.ChessTaskFullData
import core.model.task.figure.FigurePosition
import kotlinx.android.synthetic.main.fragment_single_task.*
import sample.R
import singletask.MAX_BOARD_INDEX
import singletask.factories.ChessViewFactory
import singletask.model.board.BoardAction
import singletask.model.figure.ChessFigureOnBoard
import singletask.model.figure.ChessFigureView
import singletask.presenters.SingleTaskPresenter
import singletask.reducers.SingleTaskReducer

class SingleTaskFragment : Fragment(), SingleTaskView {
    companion object {
        var selectedTask: ChessTask? = null
    }

    private lateinit var factory: ChessViewFactory

    private var presenter: SingleTaskPresenter? = null
    private var figuresOnView:MutableList<ChessFigureView> = mutableListOf()
    private var selectedBoardCells:MutableList<FigurePosition> = mutableListOf()

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_single_task, container, false)
    }

    override fun onDestroy() {
        super.onDestroy()
        presenter?.detachView()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val reducer = SingleTaskReducer()
        presenter = SingleTaskPresenter(reducer)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        presenter?.attachView(this)
        parentLayout.viewTreeObserver.addOnGlobalLayoutListener( object : ViewTreeObserver.OnGlobalLayoutListener {
            override fun onGlobalLayout() {
                parentLayout.viewTreeObserver.removeGlobalOnLayoutListener(this)
                for (i in 0..MAX_BOARD_INDEX) {
                    for (j in 0..MAX_BOARD_INDEX) {
                        val pieceCell: ImageView = view.findViewById(resources.getIdentifier(
                            "cell$i$j",
                            "id", context!!.packageName
                        ))
                        pieceCell.setOnClickListener {
                            //_selectedCell.onNext(FigurePosition(i, j))
                        }
                    }
                }
                if (SingleTaskFragment.selectedTask != null) {
                    presenter?.initTask(SingleTaskFragment.selectedTask!!)
                }
            }
        })
    }

    override fun showWrongFigureMessage() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun showSolutionText() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun hideOpenSolutionButton() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun updateChessBoardSelection(selectedCells: List<FigurePosition>) {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun updateChessBoardPosition(position: List<ChessFigureOnBoard>) {
        clearBoard()
        for (currentFigure in position) {
            val figureView = factory.buildFigure(currentFigure.figureType, currentFigure.color)
            val newFigure = ChessFigureView(
                currentFigure.id,
                figureView,
                currentFigure.position,
                currentFigure.figureType
            )
            figureView.setOnClickListener {
                _selectedFigureId.onNext(currentFigure.id)
            }
            addFigureToScreen(newFigure)
        }
    }

    override fun applyAction(action: BoardAction) {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun showWrongMoveDialog() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun showWinDialog() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    override fun closeView() {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }

    private fun addFigureToScreen(figure: ChessFigureView) {
        val pieceCell: ImageView = view!!.findViewById(resources.getIdentifier(
            "cell${figure.position.row}${figure.position.column}",
            "id", context!!.packageName
        ))
        val pieceRow: ConstraintLayout = view!!.findViewById(resources.getIdentifier(
            "row${figure.position.row + 1}",
            "id", context!!.packageName
        ))
        pieceRow.addView(figure.imageView)
        figure.imageView.x = pieceCell.x
        figure.imageView.y = pieceCell.y
        figure.imageView.layoutParams.height = pieceCell.height
        figure.imageView.layoutParams.width = pieceCell.width
        figure.imageView.requestLayout()
        figuresOnView.add(figure)
    }

    private fun removeFigureFromScreen(figure: ChessFigureView) {
        figuresOnView.remove(figure)

        val pieceRow: ConstraintLayout = view!!.findViewById(resources.getIdentifier(
            "row${figure.position.row + 1}",
            "id", context!!.packageName
        ))
        pieceRow.removeView(figure.imageView)
    }

    private fun clearSelection() {
        for (currentPosition in selectedBoardCells) {
            val pieceCell: ImageView = view!!.findViewById(resources.getIdentifier(
                "cell${currentPosition.row}${currentPosition.column}",
                "id", context!!.packageName
            ))
            pieceCell.clearColorFilter()
        }
        selectedBoardCells.clear()
    }

    private fun clearBoard() {
        for (figureView in figuresOnView) {
            val pieceRow: ConstraintLayout = view!!.findViewById(resources.getIdentifier(
                "row${figureView.position.row + 1}",
                "id", context!!.packageName
            ))
            pieceRow.removeView(figureView.imageView)
        }
        figuresOnView.clear()
    }
}