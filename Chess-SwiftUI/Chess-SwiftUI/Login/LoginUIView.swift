import SwiftUI

struct LoginUIView: View {
    @EnvironmentObject var navState: NavigationState
    @ObservedObject private var viewState: LoginStateView = LoginStateView()
    
    var body: some View {
        VStack {
            Text("Login")
            TextField("Enter email",text: $viewState.emailValue)
                .padding(.bottom, 16)
                .padding(.leading, 32)
                .padding(.trailing, 32)
                .textFieldStyle(RoundedBorderTextFieldStyle())
            
            
            Text("Password")
            TextField("Enter password", text: $viewState.passwordValue)
                .padding(.bottom, 16)
                .padding(.leading, 32)
                .padding(.trailing, 32)
                .textFieldStyle(RoundedBorderTextFieldStyle())
            
            
            Button(action: {
                self.viewState.loginCallback?()
            }) {
                Text("Login")
                    .fontWeight(.bold)
                    .padding()
                    .overlay(
                        Capsule(style: .continuous)
                            .stroke(style: StrokeStyle(lineWidth: 2))
                    )
            }
            .disabled(!viewState.loginButtonEnabled)
            .padding(.bottom, 16)
            
            Button(action: {
                self.viewState.registerCallback?()
            }) {
                Text("Register")
                    .fontWeight(.bold)
                    .padding()
                    .overlay(
                        Capsule(style: .continuous)
                            .stroke(style: StrokeStyle(lineWidth: 2))
                    )
            }
            .disabled(!viewState.registerButtonEnabled)
        }
        .onReceive(self.viewState.objectWillChange, perform: {            
            if self.viewState.newDestination == .registration ||
                self.viewState.newDestination == .taskslist {
                self.navState.destination = self.viewState.newDestination
            }
        })
    }
}

struct LoginView_Previews: PreviewProvider {
    static var previews: some View {
        LoginUIView()
    }
}
