package taskslist.views

import core.model.ChessTaskShortData
import sample.R
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import taskslist.RowClickCallback

class TasksListAdapter : RecyclerView.Adapter<TasksListViewHolder>() {
    companion object {
        private const val MAX_DESCRIPTION_PARTS: Int = 3
    }

    var tasks:List<ChessTaskShortData> = emptyList()
        set(value) {
            field = value
            notifyDataSetChanged()
        }

    var rowClickCallback: RowClickCallback? = null

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): TasksListViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.row_chess_task, parent, false)
        return TasksListViewHolder(view)
    }

    override fun getItemCount(): Int = tasks.size

    override fun onBindViewHolder(holder: TasksListViewHolder, position: Int) {
        val splittedDescription = tasks[position].description.split(",")
        holder.taskDescription.text = splittedDescription[0].trim()
        holder.taskPlace.text = splittedDescription[1].trim()
        if (splittedDescription.size == MAX_DESCRIPTION_PARTS) {
            holder.taskYear.text = splittedDescription[2].trim()
        }
        holder.mainLayout.setOnClickListener {
            rowClickCallback?.invoke(tasks[position])
        }
    }
}
