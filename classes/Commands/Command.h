#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include "../Task.h"


class Command{
protected:
	int position;
	vector<Task> *schedule;
public:
	Command(vector<Task> *sched, int pos) : schedule(sched), position(pos) {};
	virtual void execute() = 0;
	virtual void unexecute() = 0;
};

#endif
