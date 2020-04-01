import UIKit
import app

class ViewController: UIViewController, LoginView {
    func displayMessage(messageId: LoginMessageId) {
        <#code#>
    }
    
    func navigateTo(destination_ destination: OnBoardingDestinationId) {
        <#code#>
    }
    
    func setLoading(isLoading: Bool) {
        <#code#>
    }
    
    func setLoginButtonEnabled(isEnabled: Bool) {
        <#code#>
    }
    
    func setLoginTextEnabled(isEnabled: Bool) {
        <#code#>
    }
    
    func setPasswordTextEnabled(isEnabled: Bool) {
        <#code#>
    }
    
    func setRegisterButtonEnabled(isEnabled: Bool) {
        <#code#>
    }
    
    var credentialsChangeCallback: (([String]) -> Void)?
    
    var loginCallback: (() -> Void)?
    
    var registerCallback: (() -> Void)?
    

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }


}

