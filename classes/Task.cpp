#include "Task.h"
#include <string>

//-----------------------------Task Class-----------------------------------//
Task::Task(){
        this->task = "";
}
Task::Task(string task){
        this->task = task;
}

//------------------------------------------------
//Accessor functions
string Task::getTask(){
        return this->task;
}

//------------------------------------------------
//Mutator functions
void Task::setTask(string newTask){
        this->task = newTask;
}
void Task::concat(string word){
        this->task += word;
}
