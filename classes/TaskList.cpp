#include "TaskList.h"
#include <fstream>
#include <iostream>
#include <string>


//------------------------------TaskList Class--------------------------------//


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
			//When the first Task is established, create the arrow at that task.
			if(point->getPrev() == NULL){
				this->head = point;
				this->setArrow(point);
			}
		}
		else{
			point->concatenate(word + " ");
		}
	}
	is.close();
}

void TaskList::setArrow(Task* pointer){
	this->arrow = pointer;
}
void TaskList::printList(){
	Task* curr = this->head;	
	while(curr != NULL){
		if(this->arrow->getTask() == curr->getTask()){
			cout << "--> ";
		}
		cout << curr->getTask() << endl;
		curr = curr->getNext();
	}
}


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
