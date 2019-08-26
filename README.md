# VimSchedule
## Purpose:
This is a task manager program that is meant for ease of use and simplicity through the command line. Made with programmers in mind. It will be based on the navigational and editing keys used in Vim.

How to Use:
-----------
### Setting up:
1. Run `git clone https://github.com/jkwon0866/VimSchedule.git`, then go into the created directory.
2. To use the schedule, run `g++ main.cpp TaskList.cpp -o schedule` and enter `./schedule`. For test case assertions, run `g++ test.cpp TaskList.cpp -o output` then enter `./test`
### Schedule Keys(in progress):
j, k - navigate your tasks down or up, respectively   
shift+j, shift+k - move the task currently selected down or up, respectively   
i - allows editing on the event the arrow is pointed to  
a - append a new event after the event currently pointed to  
p - prepend a new event before the event currently pointed to  
x - delete an event. Will prompt whether you actually want to delete or not.  
:w - save the current schedule (will write the sequence of tasks to a file)  
:q - quit the program (Note: this can be combine with the :w command as :wq, but it needs to be in that order)  

Design:
-------
### Classes:
**Task**: A class that represents a task in your schedule. Accessor and mutator functions are enabled.  
**Arrow**: A class that represents an arrow pointing to the task you're looking at right now. *Note*: This is tentative, and I am planning on changing this into a Task pointer private member in TaskList to eliminate unnecessary complexity.
**TaskList**: A class that represents the list of tasks you currently have on file. It has an arrow pointing somewhere on a doubly-linked list of Tasks.  

## Where We Are Now:
I am now deciding whether to keep the Arrow class design or just reduce it down to a Task pointer in the TaskList class. Afterwards, I will be immediately implementing the goUp() and goDown() functions for navigating the tasks.

## Future Plans:
1. I will be implementing how the data structure (whether a linked list or array) adds, swaps, or deletes tasks.
2. I plan to make the program respond to key commands without having to press enter. After some quick searching, I noticed a library called curse that may allow me to do just that. The catch is it runs only in the Linux environment, but that should be reasonable enough for making the program cross-platform.

