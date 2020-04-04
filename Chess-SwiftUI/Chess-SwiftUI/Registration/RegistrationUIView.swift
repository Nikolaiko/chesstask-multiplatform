import SwiftUI

struct RegistrationUIView: View {
    @EnvironmentObject var navState: NavigationState
    @ObservedObject private var viewState: RegistrationViewState = RegistrationViewState()
    
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
                .padding(.bottom, 16)
                
                Button(action: {
                    self.viewState.backCallback?()
                }) {
                    Text("Back")
                        .fontWeight(.bold)
                        .padding()
                        .overlay(
                            Capsule(style: .continuous)
                                .stroke(style: StrokeStyle(lineWidth: 2))
                        )
                }
                .disabled(!viewState.backButtonEnabled)
            }            
            .onReceive(self.viewState.objectWillChange, perform: {
                if self.viewState.newDestination == .login ||
                    self.viewState.newDestination == .taskslist {
                    self.navState.destination = self.viewState.newDestination
                }
            })
    }
}

struct RegistrationUIView_Previews: PreviewProvider {
    static var previews: some View {
        RegistrationUIView()
    }
}
