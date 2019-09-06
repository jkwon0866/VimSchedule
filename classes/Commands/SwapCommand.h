#ifndef SWAPCOMMAND_H
#define SWAPCOMMAND_H

#include "Command.h"

class SwapCommand: public Command{
public:
	SwapCommand(vector<Task> *);
	int execute();
	int unexecute();
};
#endif
