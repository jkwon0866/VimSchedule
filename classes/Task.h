#ifndef TASK_H
#define TASK_H
#include <string>

using namespace std;

class Task{
private:
        string task;
public:
        //constructors
        Task();
        Task(string task);
        //accessor functions
        string getTask();
        //mutator functions
        void setTask(string newTask);
        void concat(string next);
};



#endif
