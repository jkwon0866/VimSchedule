#ifndef PRECOMMAND_H
#define PRECOMMAND_H

#include "Command.h"

class PrependCommand: public Command{
public:
	PrependCommand(vector<Task> *);
	int execute();
	int unexecute();
};
#endif
