#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../classes/TaskList.h"
#include "../classes/Task.h"

/*
A bottom-up approach: test the lowest level of classes, starting with the functions that will
build on everything else (i.e. getTask()). Then work your way up to the highest level.
*/

//----------------------Task test cases-------------------//
//Task strings
TEST_CASE("Access Task string","task string"){
	Task testTask;
	REQUIRE(testTask.getTask() == "");

	Task testTask2("This is a task.");
	REQUIRE(testTask2.getTask() == "This is a task.");
}
//Mutate task string
TEST_CASE("Mutate task string","task string"){
	Task testTask("This is the task.");
	testTask.updateTask("This is the new task.");
	REQUIRE(testTask.getTask() == "This is the new task.");
	testTask.concatenate(" And now it has been concatenated.");
	REQUIRE(testTask.getTask() == "This is the new task. And now it has been concatenated.");
}

//Previous and Next Order--leave it for when the moveUp and moveDown functions are implemented

/*
//TaskList test cases
TEST_CASE(""){

}
*/
