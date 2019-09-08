#ifndef SWAPCOMMAND_H
#define SWAPCOMMAND_H

#include "Command.h"

class SwapCommand: public Command{
public:
	void execute();
	void unexecute();
};
#endif
