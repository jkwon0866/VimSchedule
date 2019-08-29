#include "TaskList.h"
#include <fstream>
#include <iostream>
#include <string>
#include <limits>


//------------------------------TaskList Class--------------------------------//



//Go through the tasks.txt and add a new Task for each statement beginning with the "***" characters 
TaskList::TaskList(){
	this->head = NULL;
	this->arrow = NULL;
	Task* prev = NULL;
	Task* point = NULL;
	//read the file text
	ifstream is("tasks.txt");
	string word;
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
			//When the first Task is established, create the arrow at that task.
			if(point->getPrev() == NULL){
				this->head = point;
				this->arrow = point;
			}
		}
		else{
			point->concatenate(word + " ");
		}
	}
	is.close();
}

TaskList::~TaskList(){
	if(this->head == NULL){
		return;	
	}
	else{
		Task *curr = this->head;
		Task *next;
		while(curr != NULL){
			next = curr->getNext();
			delete curr;
			curr = next;
		}
		this->head = NULL;
		this->arrow = NULL;
		return;
	}	
}

void TaskList::printList(){
	cout << "----------------------------------------------------------------------" << endl;
	Task* curr = this->head;	
	while(curr != NULL){
		if(this->arrow->getTask() == curr->getTask()){
			cout << "--> ";
		}
		cout << curr->getTask() << endl;
		curr = curr->getNext();
	}
	cout << "----------------------------------------------------------------------" << endl;
}

//-----------------------------Editing Controls----------------------------//

//Removes the task the arrow is currently pointed to
void TaskList::remove(){
	if(this->arrow == NULL){
		return;
	}
	else{
		Task *arrowPoint = NULL;
		if(this->arrow->getNext() != NULL){
			this->arrow->getNext()->setPrev(this->arrow->getPrev());
			arrowPoint = this->arrow->getNext();
		}
		if(this->arrow->getPrev() != NULL){
			this->arrow->getPrev()->setNext(this->arrow->getNext());
			if(arrowPoint == NULL){
				arrowPoint = this->arrow->getPrev();
			}
		}
		else{
			this->head = this->arrow->getNext();
		}
		delete this->arrow;
		this->arrow = arrowPoint;
	}
}

//Appends a new task right after the task that arrow points to
void TaskList::append(){
	string task;
	cout << "Task: ";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	getline(cin, task, '\n');
	Task *newTask = new Task(task);
	if(this->head == NULL){
		this->head = newTask;
		this->arrow = this->head;	
	}
	else{
		//Establish the connection between newTask and arrow's next task
		if(this->arrow->getNext() != NULL){
			this->arrow->getNext()->setPrev(newTask);
			newTask->setNext(this->arrow->getNext());
		}
		//Establish the connection between newTask and arrow task
		this->arrow->setNext(newTask);
		newTask->setPrev(this->arrow);
	}
}

//Prepends a new task right before the task that arrow points to
void TaskList::prepend(){
	string task;
	cout << "Task: ";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	getline(cin, task, '\n');
	Task *newTask = new Task(task);
	if(this->head == NULL){
		this->head = newTask;
		this->arrow = this->head;	
	}
	else{
		//Establish the connection between newTask and arrow's prev task
		if(this->arrow->getPrev() != NULL){
			this->arrow->getPrev()->setNext(newTask);
			newTask->setPrev(this->arrow->getPrev());	
		}
		//Otherwise, start a new list with the newTask as head
		else{
			this->head = newTask;
		}
		//Establish the connection between newTask and arrow's next task
		newTask->setNext(this->arrow);
		this->arrow->setPrev(newTask);
	}
}

//--------------------------Navigational Controls----------------------//

void TaskList::goUp(){
	if(this->arrow->getPrev() != NULL){
		this->arrow = this->arrow->getPrev();
	}
}

void TaskList::goDown(){
	if(this->arrow->getNext() != NULL){
		this->arrow = this->arrow->getNext();
	}
}


void TaskList::save(){
	ofstream os("tasks.txt", ios::trunc);	
	Task *curr = this->head;
	while(curr != NULL){
		os << " *** " << curr->getTask();
		curr = curr->getNext();
	}	
	os.close();
}
