import SwiftUI
import app

struct TaskRowUIView: View {
    let taskData: ChessTaskShortData
    
    var body: some View {
        Text(taskData.component2())
            .font(.title)
            .multilineTextAlignment(.center)
    }
}

struct TaskRowUIView_Previews: PreviewProvider {
    static var previews: some View {
        TaskRowUIView(taskData: ChessTaskShortData(id: 1, description: "description"))
    }
}
