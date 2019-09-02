cmake_minimum_required(VERSION 2.8)

project(VimSchedule)

add_executable(
	sched
	main.cpp
	./classes/Task.cpp
	./classes/TaskList.cpp
)

add_executable(
	tests
	./unit_tests/test.cpp
	./classes/Task.cpp
	./classes/TaskList.cpp
	./unit_tests/catch.hpp
)
