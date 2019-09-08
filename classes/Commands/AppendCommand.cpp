#include "AppendCommand.h"
#include <iostream>

using namespace std;

void AppendCommand::execute(){
	cout << "This is int position: " << this->position << endl;
	cout << "This is a stub placeholder for Append." << endl;	
}
void AppendCommand::unexecute(){
	cout << "This is a stub placeholder for Append." << endl;	
}
