import Foundation
import app

class SingleTaskViewState: NSObject, ObservableObject, SingleTaskView  {
    static var selectedTask: ChessTask? = nil
    
    fileprivate let presenter = SingleTaskPresenter(reducer: SingleTaskReducer())
    fileprivate var viewTask: ChessTask? = nil
    
    var exitButtonCallback: (() -> Void)?
    var restartButtonCallback: (() -> Void)?
    var selectCellCallback: ((FigurePosition) -> Void)?
    var selectFigureCallback: ((String) -> Void)?
    var undoButtonCallback: (() -> Void)?
    
    
    var showWinAlert: Bool = false
    var showWorngAlert: Bool = false
    
    @Published var showAlert: Bool = false
    @Published var solutionButtonVisible: Bool = true
    @Published var solutionTextVisible: Bool = false
    @Published var newDestination: AppDestination = .notset
    @Published var figures: [[CellState]] = Array(
        repeating: Array(
            repeating: CellState(),
            count: 8),
        count: 8)
    
    override init() {
        super.init()
        presenter.attachView(presenterView: self)
        presenter.doInitTask(task: SingleTaskViewState.selectedTask!)
    }
    
    func openSolution() {
        presenter.openSolution()
    }
    
    func cellTapCallback(row: Int, column: Int) {
        let state = figures[row][column]
        if state.figureType == .empty {
            selectCellCallback?(FigurePosition(row: Int32(row), column: Int32(column)))
        } else {
            selectFigureCallback?(state.figureId)
        }
    }
    
    func applyAction(action: BoardAction) {
        clearSelection()
        
        if action.removedFigure != nil {
            var removedFigureCell = findFigureCellById(id: action.removedFigure!.id)
            removedFigureCell?.figureId = ""
            removedFigureCell?.figureType = .empty
            removedFigureCell?.figutreColor = .notset
            figures[Int(action.removedFigure!.position.row)][Int(action.removedFigure!.position.column)] = removedFigureCell!
        }
        
        if action.addedFigure != nil {
            figures[Int(action.addedFigure!.position.row)][Int(action.addedFigure!.position.column)] = chessStateFromFigure(figure: action.addedFigure!)
        }
        
        var movedFigureCell = findFigureCellById(id: action.figure.id)
        movedFigureCell?.figureId = ""
        movedFigureCell?.figureType = .empty
        movedFigureCell?.figutreColor = .notset
        figures[Int(action.startPosition.row)][Int(action.startPosition.column)] = movedFigureCell!
        
        figures[Int(action.endPosition.row)][Int(action.endPosition.column)] = chessStateFromFigure(figure: action.figure)
        objectWillChange.send()
    }
    
    func closeView() {
        newDestination = .taskslist
    }
    
    func hideOpenSolutionButton() {
        solutionButtonVisible = false
    }
    
    func showSolutionText() {
        print(SingleTaskViewState.selectedTask!.pgnMoves)
        solutionTextVisible = true
    }
    
    func showWinDialog() {
        showWinAlert = true
        showWorngAlert = false
        showAlert = true
    }
    
    func showWrongFigureMessage() {
        print("Wrong figure!")
    }
    
    func showWrongMoveDialog() {
        showWinAlert = false
        showWorngAlert = true
        showAlert = true
    }
    
    func updateChessBoardPosition(position: [ChessFigureOnBoard]) {
        figures = Array(
        repeating: Array(
            repeating: CellState(),
            count: 8),
        count: 8)
        
        for figure in position {
            figures[Int(figure.position.row)][Int(figure.position.column)] =
                chessStateFromFigure(figure: figure)
        }
    }
    
    func updateChessBoardSelection(selectedCells: [FigurePosition]) {
        for currectPosition in selectedCells {
            figures[Int(currectPosition.row)][Int(currectPosition.column)].selected = true
        }
        objectWillChange.send()
    }
    
    fileprivate func findFigureCellById(id: String) -> CellState? {
        for i in 0..<8 {
            for j in 0..<8 {
                if figures[i][j].figureId == id {
                    return figures[i][j]
                }
            }
        }
        return nil
    }
    
    fileprivate func clearSelection() {
        for i in 0..<8 {
            for j in 0..<8 {
                figures[i][j].selected = false
            }
        }
    }
    
    fileprivate func chessStateFromFigure(figure: ChessFigureOnBoard) -> CellState {
        var figureType: ChessPieceType = .empty
        switch figure.figureType {
            case .bishop:
                figureType = .bishop
            case .rock:
                figureType = .rock
            case .knight:
                figureType = .knight
            case .king:
                figureType = .king
            case .queen:
                figureType = .queen
            case .pawn:
                figureType = .pawn
            default:
                figureType = .empty
        }
        
        var figureColor: ChessPieceColor = .notset
        switch figure.color {
            case .black:
                figureColor = .black
            case .white:
                figureColor = .white
            default:
                figureColor = .notset
        }
        return CellState(
            figureId: figure.id,
            figureType: figureType,
            figutreColor: figureColor
        )
    }
}
