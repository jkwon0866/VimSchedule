#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include <stack>
#include "Task.h"
#include "./Commands/Command.h"

using namespace std;

//List of Tasks
//Abstract out the list data structure(with vector)

class Controller{
private:
	int position;
	vector<Task> schedule;
	stack<Command *> undoHistory;
	stack<Command *> redoHistory; 
public:
	Controller();
	void printList();
	void append();
	//void prepend();
	//void moveUp();
	//void moveDown();
	//void undo();
	//void redo();
};

//remove()
//goUp()
//goDown()
//save()


#endif
