cmake_minimum_required(VERSION 2.8)

project(VimSchedule)

add_executable(
	sched
	main.cpp
	./classes/Task.cpp
	./classes/Controller.cpp
	./classes/Commands/AppendCommand.cpp
)
