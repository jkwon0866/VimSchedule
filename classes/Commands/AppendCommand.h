#ifndef APPCOMMAND_H
#define APPCOMMAND_H

#include "Command.h"

class AppendCommand: public Command{
public:
	AppendCommand(vector<Task> *);
	int execute();
	int unexecute();
};
#endif
