package singletask

import core.model.task.figure.FigurePosition
import singletask.model.SingleTaskNewsId
import singletask.model.board.BoardAction
import singletask.model.figure.ChessFigureOnBoard

typealias VoidCallback = () -> Unit

typealias BoardActionCallback = (BoardAction) -> Unit
typealias ChessBoardPositionCallback = (List<ChessFigureOnBoard>) -> Unit
typealias BoardCellsSelectedUpdateCallback = (List<FigurePosition>) -> Unit
typealias SelectFigureCallback = (String) -> Unit
typealias SelectCellCallback = (FigurePosition) -> Unit

typealias SingleTaskNewsCallback = (SingleTaskNewsId) -> Unit