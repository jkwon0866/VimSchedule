#ifndef REMCOMMAND_H
#define REMCOMMAND_H

#include "Command.h"

class RemoveCommand: public Command{
public:
	RemoveCommand(vector<Task> *);
	int execute();
	int unexecute();
};
#endif
