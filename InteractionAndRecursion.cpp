#include <iostream>

bool PositiveOrNegativeCheck(int num) {

	// Answer 1

	if (num >= 0)

		return true;

	else

		return false;

	return false;
}

int PositiveNumUntilNegativeNum() {

	// Answer 2

	int enter_number = 0;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	
	std::cout << "Please enter a negative number: ";

	std::cin >> enter_number;


	if (enter_number < 0) {

		return enter_number;

	}

	else {

		std::cout << "" << std::endl;
		std::cout << "Invalid Number!";
		PositiveNumUntilNegativeNum();

	}

	return -1;
}

int FindFactorial(int n) {
	
	if (n == 0 || n == 1) {

		return 1;

	}

	return n * FindFactorial(n - 1);

}

void InteractionAndRecursion() {

	int num_to_check = 3;

	bool result = PositiveOrNegativeCheck(num_to_check);

	//std::cout << result;

	//PositiveNumUntilNegativeNum();

	int num_to_fact = 5;

	int factorial = FindFactorial(num_to_fact);

	std::cout << "Factorial of " << num_to_fact << " is " << factorial << std::endl;
}