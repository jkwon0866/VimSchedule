#ifndef REMCOMMAND_H
#define REMCOMMAND_H

#include "Command.h"

class RemoveCommand: public Command{
public:
	void execute();
	void unexecute();
};
#endif
