import SwiftUI
import app

struct SingleTaskUIView: View {
    
    @EnvironmentObject var navState: NavigationState
    @ObservedObject private var viewModel = SingleTaskViewState()
    
    var body: some View {
        GeometryReader { geometry in
            VStack(spacing: 0) {
                Button(action: {
                    self.viewModel.exitButtonCallback?()
                }) {
                    Text("Back")
                        .fontWeight(.bold)
                        .padding()
                        .overlay(
                            Capsule(style: .continuous)
                                .stroke(style: StrokeStyle(lineWidth: 2))
                        )
                }
                .padding(.bottom, 16)
                
                OddRowUIView(
                    index: 0,
                    figures: self.viewModel.figures[0],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                })
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                EvenRowUIView(
                    index: 1,
                    figures: self.viewModel.figures[1],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                })
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                OddRowUIView(
                    index: 2,
                    figures: self.viewModel.figures[2],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                EvenRowUIView(
                    index: 3,
                    figures: self.viewModel.figures[3],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                OddRowUIView(
                    index: 4,
                    figures: self.viewModel.figures[4],
                    rowCallback: { rowIndex, columnIndex in
                         self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                EvenRowUIView(
                    index: 5,
                    figures: self.viewModel.figures[5],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                OddRowUIView(
                    index: 6,
                    figures: self.viewModel.figures[6],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
                
                EvenRowUIView(
                    index: 7,
                    figures: self.viewModel.figures[7],
                    rowCallback: { rowIndex, columnIndex in
                        self.viewModel.cellTapCallback(row: rowIndex, column: columnIndex)
                    }
                )
                .frame(width: (geometry.size.width / 8) * 8, height: geometry.size.width / 8)
            
                if self.viewModel.solutionButtonVisible {
                    Button(action: {
                        self.viewModel.openSolution()
                    }) {
                        Text("Reveal Solution")
                            .fontWeight(.bold)
                            .padding()
                            .overlay(
                                Capsule(style: .continuous)
                                    .stroke(style: StrokeStyle(lineWidth: 2))
                            )
                    }
                }                
            }
            .onReceive(self.viewModel.objectWillChange, perform: {
                print(self.viewModel.newDestination)
                if self.viewModel.newDestination != .notset {
                    self.navState.destination = self.viewModel.newDestination
                }
            })
            Spacer()
        }
        
    }
}

struct SingleTaskUIView_Previews: PreviewProvider {
    static var previews: some View {
        SingleTaskUIView()
    }
}
