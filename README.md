# VimSchedule
## Purpose:
This is a task manager program that is meant for ease of use and simplicity through the command line. Made with programmers in mind. It will be based on the navigational and editing keys used in Vim.

How to Use:
-----------
### Setting up:
1. Run `git clone https://github.com/jkwon0866/VimSchedule.git`, then go into the created directory.
2. To use the schedule, run `g++ main.cpp classes/TaskList.cpp classes/Task.cpp -o schedule` and enter `./schedule`. For test case assertions, go into the tests directory, run `g++ test.cpp ../classes/TaskList.cpp ../classes/Task.cpp -o test` then enter `./test`.   
**IMPORTANT**: The executable must be used in the top directory, otherwise errors will occur.  
### Schedule Keys(in progress):
j, k - navigate your tasks down or up, respectively (done)   
shift+j, shift+k - move the task currently selected down or up, respectively   
i - allows editing on the event the arrow is pointed to  
a - append a new event after the event currently pointed to (done)   
p - prepend a new event before the event currently pointed to (done)   
x - delete an event. Will prompt whether you actually want to delete or not. (done)   
w - save the current schedule (will write the sequence of tasks to a file) (done)   
q - quit the program (Note: this should be able to combine with the command as wq) (done)  

Design:
-------
### Classes:
**Task**: A class that represents a task in your schedule. Accessor and mutator functions are enabled.  
**TaskList**: A class that represents the list of tasks you currently have on file. It has an arrow (Task pointer) pointing somewhere on a doubly-linked list of Tasks. The arrow pointer can navigate down or up with the j or k key. 

## Where We Are Now:
I am now working on the interactive functionality of the program (without requiring an endline to process commmands), and will incorporate it into the implementation of the moveUp, moveDown, goUp, and goDown.

## Future Plans:
1. (See above) I plan to make the program respond to key commands without having to press enter. After some quick searching, I noticed a library called curse that may allow me to do just that. The catch is it runs only in the Linux environment, but that should be reasonable enough for making the program cross-platform.
2. I will implement the task edit functionality.
3. I will be looking into how to incorporate undo/redo functionalities.
