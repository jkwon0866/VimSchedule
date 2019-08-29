#include <fstream>
#include <iostream>
#include <string>
#include "classes/TaskList.h"

using namespace std;


void help(){
	cout << "j, k - navigate your tasks down or up, respectively" << endl \
	<< "shift+j, shift+k - move the task currently selected down or up, respectively" << endl \
	<< "i - allows editing on the event the arrow is pointed to" << endl \
	<< "a - append a new event after the event currently pointed to" << endl \
	<< "p - prepend a new event before the event currently pointed to" << endl \
	<< "x - delete an event. Will prompt whether you actually want to delete or not." << endl \
	<< "w - save the current schedule (will write the sequence of tasks to a file)." << endl \
	<< "q - quit the program (Note: this should be able to combine with the command as wq)." << endl;
}

int main(){
	TaskList list;
	list.printList();
	string command;
	while (cin >> command){
		if(command == "j"){
			list.goDown();
		}
		else if(command == "k"){
			list.goUp();
		}
		else if(command == "a"){
			list.append();
		}
		else if(command == "p"){
			list.prepend();
		}
		else if(command == "x"){
			list.remove();
		}
		else if(command == "w"){
			list.save();
		}
		else if(command == "help"){
			help();
			continue;
		}	
		else if(command == "q"){
			exit(0);	
		}
		else if(command == "wq"){
			list.save();
			exit(0);
		}
		else{
			cout << "For keys to use in schedule, enter \"help\"" << endl;
		}
		list.printList();
	}
	return 0;
}
