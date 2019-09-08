#ifndef APPCOMMAND_H
#define APPCOMMAND_H

#include "Command.h"

class AppendCommand: public Command{
public:
	AppendCommand(vector<Task> *sched, int pos) : Command(sched,pos) {};
	void execute();
	void unexecute();
};
#endif
