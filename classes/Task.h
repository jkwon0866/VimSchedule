#ifndef TASK_H
#define TASK_H
#include <string>

using namespace std;

class Task{
private:
        string task;
        Task* nextTask;
        Task* prevTask;

public:
        //constructors
        Task();
        Task(string task);

        //accessor functions
        Task* getNext();
        Task* getPrev();
        string getTask();
        //mutator functions
        void setNext(Task* next);
        void setPrev(Task* prev);
        void updateTask(string newTask);
        void concatenate(string next);
};



#endif
