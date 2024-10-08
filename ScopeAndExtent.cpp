#include <iostream>



void ScopeAndExtent() {

	// Answer 1

	/*
		Global variables are created when executions starts and deleted when the entire solution or program exits or complete it's execution.
	*/

	int y = 2;

	// Answer 2

	/*
		The scope of x in the following lines of code is within the for loop. It cannot be accessed outside the for loop.
	*/
	
	int arr[2];

	for (int x = 0; x < y; ++x) {

		std::cout << arr[x] << "," << std::endl;
		std::cout << "" << std::endl;
	}

	// Answer 3

	int same_variable = 3;

	{
		int same_variable = 9;

		std::cout << "same_variable outside the scope of ScopeAndExtent function within the curly braces has a value of: " << same_variable << std::endl;
		std::cout << "" << std::endl;
	}

	std::cout << "same_variable within the scope of ScopeAndExtent function has a value of: " << same_variable << std::endl;

}