import Foundation
import app

class TasksListViewState: NSObject, ObservableObject, TasksListView {
    var logoutCallback: (() -> Void)?
    var selectedTaskCallback: ((KotlinInt) -> Void)?
    
    @Published var tasks: [ChessTaskShortData] = []
    @Published var loadInProgress: Bool = false
    @Published var newDestination: AppDestination = .notset
    
    fileprivate let presenter = TasksListPresenter(
        listReducer: TasksListReducer(
            loggedUserRepository: LoggedUserRepository(),
            tasksApi: TasksListApi(),
            taskApi: SingleTaskApi()
        )
    )
    
    override init() {
        super.init()
        presenter.attachView(presenterView: self)
        presenter.refreshTasks()
    }
    
    func selectedRow(task: ChessTaskShortData) {
        selectedTaskCallback?(
            KotlinInt(int: task.component1())
        )
    }
    
    func displayMessage(newsMessage: TasksListMessageId) {
        print(newsMessage)
    }
    
    func loadedTaskReady(task: ChessTask) {
        SingleTaskViewState.selectedTask = task
        navigateTo(destination: .singleTask)
    }
    
    func navigateTo(destination: TasksListDestinationId) {
        switch destination {
            case .loginScreen:
                newDestination = .login
            case .singleTask:
                newDestination = .singletask
            default:
                newDestination = .notset
        }
        objectWillChange.send()
    }
    
    func setLoadingVisibility(visible: Bool) {
        loadInProgress = visible
    }
    
    func updateTasksList(list: [ChessTaskShortData]) {
        tasks = list
    }
}
