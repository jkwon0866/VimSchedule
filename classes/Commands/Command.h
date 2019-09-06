#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include "Task.h"


class Command{
private:
	int position;
protected:
	vector<Task> *schedule;
public:
	virtual int execute();
	virtual int unexecute();
};

#endif
