#ifndef PRECOMMAND_H
#define PRECOMMAND_H

#include "Command.h"

class PrependCommand: public Command{
public:
	void execute();
	void unexecute();
};
#endif
