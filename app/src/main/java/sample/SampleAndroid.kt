package sample

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import core.model.AuthorizationUserData
import network.api.UserApi

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        println("Before")
        UserApi().loginUser(AuthorizationUserData("newtest@mail.ru", "password"), {
            println("Success : $it")
        }, {
            println("Exception : $it")
        })
        println("After")
    }
}