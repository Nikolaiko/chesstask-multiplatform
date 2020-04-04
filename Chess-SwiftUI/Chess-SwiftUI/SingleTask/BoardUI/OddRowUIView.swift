import SwiftUI

struct OddRowUIView: View {
    let index: Int
    let figures: [CellState]
    let rowCallback: ((Int, Int) -> Void)?
    
    var body: some View {
        HStack(spacing: 0) {
            ForEach(0..<8) { i in
                    CellUIView(
                        cellColor: self.getColorFromIndex(index: i),
                        index: i,
                        figureType: self.figures[i].figureType,
                        figureColor: self.figures[i].figutreColor,
                        selected: self.figures[i].selected,
                        cellCallback: { columnIndex in
                            self.rowCallback?(self.index, columnIndex)
                        }
                    )
            }
        }
    }
    
    fileprivate func getColorFromIndex(index :Int) -> Color {
        var color = Color.red
        if index % 2 == 0 {
            color = .white
        } else {
            color = .gray
        }        
        return color
    }
}

struct RowUIView_Previews: PreviewProvider {
    static var previews: some View {
        OddRowUIView(index: 0, figures: [], rowCallback: { i, j in
            
        })
    }
}
