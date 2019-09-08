#include "Controller.h"
#include "./Commands/AppendCommand.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Controller::Controller(){
	ifstream is("tasks.txt");
	if(!is.is_open()){
		cout << "tasks.txt could not open" << endl;
		exit(1);
	}
	this->position = 0;
	string word;
	Task newTask;
	while(is >> word){
		if(word == "***"){
			Task newTask;
			this->schedule.push_back(newTask);	
		}
		else{
			this->schedule.back().concat(word + " ");
		}
	}
	is.close();
}

void Controller::printList(){
	for(int i = 0; i < this->schedule.size(); i++){
		cout << this->schedule.at(i).getTask() << endl;
	}
}
void Controller::append(){
	Command *appendCommand = new AppendCommand(&(this->schedule), this->position);
	appendCommand->execute();
	this->undoHistory.push(appendCommand);
}
