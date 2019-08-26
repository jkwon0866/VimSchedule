#ifndef TASKLIST_H
#define TASKLIST_H
#include "Task.h"

using namespace std;

class TaskList{
private:
	Task* head;
	Task* arrow;
public:
	TaskList();
	void setArrow(Task* point);
	void printList();

	//Navigation controls
	void goUp();
	void goDown();
	//Controls
	/*
	void moveUp();
	void moveDown();
	*/
	/*
	~TaskList();
	void save();
	void quit();
	*/
};

#endif
