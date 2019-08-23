# VimSchedule
## Purpose:
This is a task manager program that is meant for ease of use and simplicity through the command line. Made with programmers in mind. It will be based on the navigational and editing keys used in Vim.

## Schedule Keys(in progress):
j, k - navigate your tasks up or down, respectively
shift+j, shift+k - move the task currently selected up or down, respectively
i - allows editing on the event the arrow is pointed
a - append a new event after the event currently pointed
p - prepend a new event before the event currently pointed
x - delete an event. Will prompt whether you actually want to delete or not.
:w - save the current schedule (will write the sequence of tasks to a file)
:q - quit the program (Note: this can be combine with the :w command as :wq, but it needs to be in that order) 

## Where We Are Now:
Currently developing the program's storing capabilities. I will be using File I/O to write what I want to store and read from the generated file. 

## Future Plans:
1. I will be implementing how the data structure (whether a linked list or array) adds, swaps, or deletes tasks.
2. I plan to make the program respond to key commands without having to press enter. After some quick searching, I noticed a library called curse that may allow me to do just that. The catch is it runs only in the Linux environment, but that should be reasonable enough for making the program cross-platform.

