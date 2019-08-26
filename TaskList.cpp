#include "TaskList.h"
#include <fstream>
#include <iostream>


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
//-------------------------------Arrow Class----------------------------------//

Arrow::Arrow(){
	this->pointed = NULL;
}
Arrow::Arrow(Task* pointed){
	this->pointed = pointed;
}

//Accessor functions
Task* Arrow::getPointed(){
	return pointed;
}

//Mutator functions
void Arrow::redirect(Task* newTask){
	this->pointed = newTask;	
}


//------------------------------TaskList Class--------------------------------//


void TaskList::setPointer(Arrow pointer){
	this->pointer = pointer;
}

//1) Initialize a Task pointer outside of while loop that goes through file
//2) If you reach ***, then 
TaskList::TaskList(){
	Task* prev = NULL;
	Task* point = NULL;
	//read the file text
	ifstream is;
	string word;
	is.open("file.txt");
	while(is >> word){
		if(word == "***"){
			//point is the Task that will become new; prev retains what point was before
			prev = point;
			point = new Task();
			//set connection of the new Task to the list
			point->setPrev(prev);
			if(prev != NULL){
				prev->setNext(point);
			}	
			//When the first Task is established, create the Arrow at that task.
			if(point->getPrev() == NULL){
				this->head = point;
				Arrow pointer(head);
				this->setPointer(pointer);
			}
		}
		else{
			point->concatenate(word + " ");
		}
	}
	is.close();
}

void TaskList::printList(){
	Task* curr = this->head;	
	while(curr != NULL){
		if(this->pointer.getPointed()->getTask() == curr->getTask()){
			cout << "--> ";
		}
		cout << curr->getTask() << endl;
		curr = curr->getNext();
	}
}
