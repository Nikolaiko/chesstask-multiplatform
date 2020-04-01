package singletask.views

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.view.ViewTreeObserver
import android.widget.ImageView
import android.widget.Toast
import androidx.constraintlayout.widget.ConstraintLayout
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager
import androidx.navigation.fragment.NavHostFragment
import singletask.getSolutionFromPgn
import core.model.task.ChessTask
import core.model.task.figure.FigurePosition
import kotlinx.android.synthetic.main.fragment_single_task.*
import sample.R
import singletask.MAX_BOARD_INDEX
import singletask.SelectCellCallback
import singletask.SelectFigureCallback
import singletask.VoidCallback
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

    override var exitButtonCallback: VoidCallback? = null
    override var restartButtonCallback: VoidCallback? = null
    override var undoButtonCallback: VoidCallback? = null
    override var selectFigureCallback: SelectFigureCallback? = null
    override var selectCellCallback: SelectCellCallback? = null

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
        factory = ChessViewFactory(context!!)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        answerText.text = getSolutionFromPgn(selectedTask!!)
        taskLabel.text = resources.getString(R.string.task_label_title, selectedTask!!.pgnMoves.size)

        showAnswerButton.setOnClickListener {
            presenter?.openSolution()
        }

        backButton.setOnClickListener {
            exitButtonCallback?.invoke()
        }

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
                            selectCellCallback?.invoke(FigurePosition(i, j))
                        }
                    }
                }
                if (selectedTask != null) {
                    presenter?.initTask(selectedTask!!)
                }
            }
        })
    }

    override fun showWrongFigureMessage() {
        activity?.runOnUiThread {
            Toast.makeText(context!!, getString(R.string.wrong_figure_error_message), Toast.LENGTH_LONG).show()
        }
    }

    override fun showSolutionText() {
        activity?.runOnUiThread {
            answerText.visibility = View.VISIBLE
        }
    }

    override fun hideOpenSolutionButton() {
        activity?.runOnUiThread {
            showAnswerButton.visibility = View.INVISIBLE
        }
    }

    override fun updateChessBoardSelection(selectedCells: List<FigurePosition>) {
        clearSelection()
        for (currentCell in selectedCells) {
            val pieceCell: ImageView = view!!.findViewById(resources.getIdentifier(
                "cell${currentCell.row}${currentCell.column}",
                "id", context!!.packageName
            ))
            pieceCell.setColorFilter(R.color.design_default_color_primary)
            selectedBoardCells.add(currentCell)
        }
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
                selectFigureCallback?.invoke(currentFigure.id)
            }
            addFigureToScreen(newFigure)
        }
    }

    override fun applyAction(action: BoardAction) {
        clearSelection()

        if (action.removedFigure != null) {
            val destroyedFigure = figuresOnView.first { it.id == action.removedFigure.id }
            removeFigureFromScreen(destroyedFigure)
        }

        if (action.addedFigure != null) {
            val figureView = factory.buildFigure(action.addedFigure.figureType, action.addedFigure.color)
            val newFigure = ChessFigureView(
                action.addedFigure.id,
                figureView,
                action.addedFigure.position,
                action.addedFigure.figureType
            )
            figureView.setOnClickListener {
                selectFigureCallback?.invoke(action.addedFigure.id)
            }
            addFigureToScreen(newFigure)
        }

        var movedFigure = figuresOnView.first { it.id == action.figure.id }
        removeFigureFromScreen(movedFigure)

        movedFigure = movedFigure.copy(position = action.endPosition)
        addFigureToScreen(movedFigure)
    }

    override fun showWrongMoveDialog() {
        activity?.runOnUiThread {
            val manager: FragmentManager = fragmentManager!!
            val dialog =  WrongMoveDialog()
            dialog.restartCallback = {
                restartButtonCallback?.invoke()
                dialog.dismiss()
            }

            dialog.undoCallback = {
                undoButtonCallback?.invoke()
                dialog.dismiss()
            }

            dialog.exitCallback = {
                exitButtonCallback?.invoke()
                dialog.dismiss()
            }

            dialog.show(manager, resources.getString(R.string.dialog_id))
        }
    }

    override fun showWinDialog() {
        activity?.runOnUiThread {
            val manager: FragmentManager = fragmentManager!!
            val dialog =  WinDialog()
            dialog.restartCallback = {
                restartButtonCallback?.invoke()
                dialog.dismiss()
            }

            dialog.exitCallback = {
                exitButtonCallback?.invoke()
                dialog.dismiss()
            }

            dialog.show(manager, resources.getString(R.string.win_dialog_id))
        }
    }

    override fun closeView() {
        NavHostFragment
            .findNavController(this)
            .popBackStack()
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