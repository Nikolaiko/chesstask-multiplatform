import Foundation

class NavigationState: ObservableObject {
    @Published var destination: AppDestination = .login
}
