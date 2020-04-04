import SwiftUI

struct CellUIView: View {
    let cellColor: Color
    let index: Int
    let figureType: ChessPieceType
    let figureColor: ChessPieceColor
    let selected: Bool
    let cellCallback: ((Int) -> Void)?
    
    var body: some View {
        ZStack {
            buildCellView()
        }
        .background(getCellColor())
        .onTapGesture {
            self.cellCallback?(self.index)
        }
    }
    
    fileprivate func getCellColor() -> Color {
        if selected {
            return Color.pink
        } else {
            return cellColor
        }
    }
    
    fileprivate func buildCellView() -> some View {
        if figureType == .empty {
            return AnyView(
                Image("BlackBishop")
                    .resizable()
                    .hidden()
            )
        } else {
            return AnyView(
                Image(getImageNameFromTypeAndColor(type: figureType, color: figureColor))
                    .resizable()
            )
        }
    }
    
    fileprivate func getImageNameFromTypeAndColor(
        type: ChessPieceType,
        color: ChessPieceColor
    ) -> String {
        var nameTypePart: String = ""
        switch type {
            case .bishop:
                nameTypePart = "Bishop"
            case .rock:
                nameTypePart = "Rook"
            case .knight:
                nameTypePart = "Knight"
            case .king:
                nameTypePart = "King"
            case .queen:
                nameTypePart = "Queen"
            case .pawn:
                nameTypePart = "Pawn"
            default:
                nameTypePart = "Empty"
        }
        
        var nameColorPart: String = ""
        switch color {
            case .black:
                nameColorPart = "Black"
            case .white:
                nameColorPart = "White"
            default:
                nameColorPart = "Empty"
        }
        return nameColorPart + nameTypePart
    }
}

struct CellUIView_Previews: PreviewProvider {
    static var previews: some View {
        CellUIView(
            cellColor: Color.gray,
            index: 0,
            figureType: .bishop,
            figureColor: .black,
            selected: false,
            cellCallback: { index in
                
        })
    }
}
