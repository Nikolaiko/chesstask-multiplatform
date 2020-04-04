import SwiftUI
import app

struct ContentView: View {
    @EnvironmentObject var navState: NavigationState
    
    var body: some View {
        selectProperView(viewId: navState.destination)
    }
    
    func selectProperView(viewId: AppDestination) -> AnyView {
        switch navState.destination {
            case .login:
                return AnyView(LoginUIView())
            case .registration:
                return AnyView(RegistrationUIView())
            case .taskslist:
                return AnyView(TasksListUIView())
            case .singletask:
                return AnyView(SingleTaskUIView())
            default:
                return AnyView(LoginUIView())
        }
    }
}


struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
