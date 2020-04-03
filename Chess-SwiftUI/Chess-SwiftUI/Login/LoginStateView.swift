import UIKit
import app

class LoginStateView: NSObject, LoginView, ObservableObject {
    var emailValue: String = "" {
        didSet {
            credentialsChangeCallback?([emailValue, passwordValue])
        }
    }
    
    var passwordValue: String = "" {
        didSet {
            credentialsChangeCallback?([emailValue, passwordValue])
        }
    }
    
    @Published var loadInProgress: Bool = false
    
    @Published var loginButtonEnabled: Bool = false
    @Published var registerButtonEnabled: Bool = true
    
    @Published var emailTextFieldEnabled: Bool = true
    @Published var passwordTextFieldEnabled: Bool = true
    
    @Published var newDestination: AppDestination = .notset
    
    
    var credentialsChangeCallback: (([String]) -> Void)? = nil
    var loginCallback: (() -> Void)? = nil
    var registerCallback: (() -> Void)? = nil
    
    fileprivate let presenter = LoginPresenter(
        reducer: LoginReducer(
            loggedUserRepository: LoggedUserRepository(),
            userApi: UserApi()
        )
    )
    
    override init() {
        super.init()
        presenter.attachView(presenterView: self)
    }
    
    func displayMessage(messageId: LoginMessageId) {
        print(messageId)
    }
    
    func navigateTo(destination_ destination: OnBoardingDestinationId) {
        switch destination {
            case .loginScreen:
                newDestination = .notset
            case .registerScreen:
                newDestination = .registration
            case .tasksListScreen:
                newDestination = .taskslist
            default:
                newDestination = .notset
        }
        objectWillChange.send()
    }
    
    func setLoading(isLoading: Bool) {
        loadInProgress = isLoading
    }
    
    func setLoginButtonEnabled(isEnabled: Bool) {
        loginButtonEnabled = isEnabled
    }
    
    func setLoginTextEnabled(isEnabled: Bool) {
        emailTextFieldEnabled = isEnabled
    }
    
    func setPasswordTextEnabled(isEnabled: Bool) {
        passwordTextFieldEnabled = isEnabled
    }
    
    func setRegisterButtonEnabled(isEnabled: Bool) {
        registerButtonEnabled = isEnabled
    }
}
