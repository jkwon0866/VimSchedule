#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include <stack>
#include "Task.h"
#include "./Commands/Command.h"

using namespace std;

//List of Tasks
//Abstract out the list data structure(with STL list)

class Controller{
private:
	int position;
	vector<Task> taskList;
	friend stack<Command *> undoHistory;
	friend stack<Command *> redoHistory; 
public:
	Controller(vector<Task>);
	void append();
	void prepend();
	void moveUp();
	void moveDown();
	//void undo();
	//void redo();
};

//printList()
//remove()
//goUp()
//goDown()
//save()


#endif
