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
		list.printList();
	}
	return 0;
}
