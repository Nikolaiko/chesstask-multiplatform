import Foundation
import app

class RegistrationViewState: NSObject, ObservableObject, RegisterView {
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
    
    var backCallback: (() -> Void)?
    var credentialsChangeCallback: (([String]) -> Void)?
    var registerCallback: (() -> Void)?
    
    @Published var loadInProgress: Bool = false
    
    @Published var backButtonEnabled: Bool = true
    @Published var registerButtonEnabled: Bool = false
    
    @Published var emailTextFieldEnabled: Bool = true
    @Published var passwordTextFieldEnabled: Bool = true
    
    @Published var newDestination: AppDestination = .notset
    
    fileprivate let presenter = RegisterPresenter(
        reducer: RegisterReducer(
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
                newDestination = .login
            case .registerScreen:
                newDestination = .notset
            case .tasksListScreen:
                newDestination = .taskslist
            default:
                newDestination = .notset
        }
    }
    
    func setBackButtonEnabled(isEnabled: Bool) {
        backButtonEnabled = isEnabled
    }
    
    func setLoading(isLoading: Bool) {
        loadInProgress = isLoading
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
