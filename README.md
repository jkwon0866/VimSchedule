# VimSchedule
## Purpose:
This is a task manager program that is meant for ease of use and simplicity through the command line. Made with programmers in mind. It will be based on the navigational and editing keys used in Vim.
## Design:
### Classes:
**Task**: A class that represents a task in your schedule. Accessor and mutator functions are enabled.   
**Controller**: A class representing the interface that the user will be expressing the commands it wants to act on the schedule. It also acts as the invoker to a set of Commands, which are then recorded as a history (stack) of Commands, allowing for undo and redo functionality.   
**Command**: An abstract class that represents any commands that the Controller will use throughout the program's duration. The following concrete classes will be implemented under it: AppendCommand, PrependCommand, RemoveCommand, SwapCommand. Further details of these classes will be elaborated on later.  
## Where We Are Now:
After careful consideration on how I wanted to incorporate undo/redo functionality into the project, I've decided to redesign most of everything to fit close to the Command Design pattern. The biggest issue right now is how I will apply an unexecute() to the RemoveCommand, in which case I have tentatively initialized the stack of Command * in the Controller class as friends to fix this problem by allowing access to the vector of Tasks.
## Future Plans:
1. Re-implement the append, prepend, and remove functionality via the execute() in the corresponding classes.
2. Implement the unexecute() for append and prepend, then figure out how to unexecute() for remove.
3. Have the program respond to key commands without needing to press enter. After some quick searching, I noticed a library called curse that may allow me to do just that. The catch is it runs only in the Linux environment, but that should be reasonable enough for making the program cross-platform.
## How to Use:
### Setting up:
1. Run `git clone https://github.com/jkwon0866/VimSchedule.git`, then go into the created directory.
2. To use the schedule, run `cmake`, then `make`.  
3. Type in `./sched` to start the program.
**IMPORTANT**: The executable must be used in the top directory, otherwise errors will occur.  
### Schedule Keys(in progress):
j, k - navigate your tasks down or up, respectively 
shift+j, shift+k - move the task currently selected down or up, respectively   
i - allows editing on the event the arrow is pointed to  
a - append a new event after the event currently pointed to   
p - prepend a new event before the event currently pointed to   
x - delete an event. Will prompt whether you actually want to delete or not.   
w - save the current schedule (will write the sequence of tasks to a file)   
q - quit the program (Note: this should be able to combine with the command as wq)  
