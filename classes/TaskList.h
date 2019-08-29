#ifndef TASKLIST_H
#define TASKLIST_H
#include "Task.h"

using namespace std;

class TaskList{
private:
	Task* head;
	Task* arrow;
public:
	//Constructor and Destructor
	TaskList();
	~TaskList();

	void printList();
	//Editing
	void remove();
	void append();
	void prepend();

	//Navigation controls
	void goUp();
	void goDown();
	//Controls
	/*
	void moveUp();
	void moveDown();
	*/
	
	void save();
};

#endif
