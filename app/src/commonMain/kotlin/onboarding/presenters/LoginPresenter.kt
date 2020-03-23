package onboarding.presenters

import onboarding.views.LoginView

class LoginPresenter {
    private var view: LoginView? = null

    fun attachView(presenterView: LoginView) {
        view = presenterView
        bindToView()
    }

    fun detachView() {
        view = null
    }

    private fun bindToView() {
        view?.credentialsChange {

        }

        view?.loginClick {

        }
    }
}