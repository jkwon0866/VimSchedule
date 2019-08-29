#include <fstream>
#include <iostream>
#include <string>
#include "classes/TaskList.h"

using namespace std;


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
		else if(command == "q"){
			exit(0);	
		}
		list.printList();
	}
	return 0;
}
