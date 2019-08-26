#include "Task.h"
#include <string>

//-----------------------------Task Class-----------------------------------//
Task::Task(){
        this->task = "";
        this->nextTask = NULL;
        this->prevTask = NULL;
}
Task::Task(string task){
        this->task = task;
        this->nextTask = NULL;
        this->prevTask = NULL;
}



//------------------------------------------------
//Accessor functions
Task* Task::getNext(){
        return this->nextTask;
}
Task* Task::getPrev(){
        return this->prevTask;
}
string Task::getTask(){
        return this->task;
}

//------------------------------------------------
//Mutator functions
void Task::setNext(Task* next){
        this->nextTask = next;
}
void Task::setPrev(Task* prev){
        this->prevTask = prev;
}
void Task::updateTask(string newTask){
        this->task = newTask;
}
void Task::concatenate(string word){
        this->task += word;
}
