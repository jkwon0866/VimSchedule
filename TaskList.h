#ifndef __TASKLIST__H_
#define __TASKLIST__H_
#include <string>

using namespace std;


class Task{
private:
	string task;
	Task* nextTask;
	Task* prevTask;

public:
	//constructors
	Task();
	Task(string task);

	//accessor functions
	Task* getNext();
	Task* getPrev();
	string getTask();

	//mutator functions
	void setNext(Task* next);
	void setPrev(Task* prev);
	void updateTask(string newTask);
	void concatenate(string next);
};

class Arrow{
private:
	Task* pointed;
	void redirect(Task* newTask);

public:
	Arrow();
	Arrow(Task* pointed);
	Task* getPointed();
	//Controls
	/*
	void goUp();
	void goDown();
	void moveUp();
	void moveDown();
	*/
};

class TaskList{
private:
	Task* head;
	Arrow pointer;
public:
	TaskList();
	void setPointer(Arrow point);
	void printList();
	/*
	~TaskList();
	void save();
	void quit();
	*/
};

#endif
