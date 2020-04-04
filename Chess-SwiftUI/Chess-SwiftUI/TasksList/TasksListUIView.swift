import SwiftUI
import app

struct TasksListUIView: View {
    @EnvironmentObject var navState: NavigationState
    @ObservedObject private var viewModel = TasksListViewState()
    
    var body: some View {
        VStack {
            Button(action: {
                self.viewModel.logoutCallback?()
            }) {
                Text("Logout")
                    .font(.title)
            }
            .background(Color.white)
            
            List() {
                ForEach(viewModel.tasks, id:\.id) { task in
                    ZStack {
                        TaskRowUIView(taskData: task)
                        Button(action: {
                            self.viewModel.selectedRow(task: task)
                        }) {
                            Text("")
                        }
                    }
                }
            }
        }
        .onReceive(viewModel.objectWillChange, perform: {
            if self.viewModel.newDestination == .login ||
               self.viewModel.newDestination == .singletask {
                self.navState.destination = self.viewModel.newDestination
            }
        })
    }
}

struct TasksListUIView_Previews: PreviewProvider {
    static var previews: some View {
        TasksListUIView()
    }
}
