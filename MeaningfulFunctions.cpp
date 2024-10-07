#include <iostream>;

void Product(int int1, int int2) {

	std::cout << "Product of " << int1 << " and " << int2 << " is: " << int1 * int2 << std::endl;

}

double Quotient(double arg1, int arg2) {

	std::cout << "Quotient of " << arg1 << " and " << arg2 << " is: " << arg1/arg2 << std::endl;

	return -1.0;
}

void CalculatorProgram() {

	double num1;
	double num2;
	char operator_symbol;
	double answer{};

	std::cout << "Please enter your first number: ";
	
	std::cin >> num1;

	std::cout << "" << std::endl;

	std::cout << "Please enter your second number: ";

	std::cin >> num2;

	std::cout << "" << std::endl;

	std::cout << "Please enter the operator for the operation you want to perform: ";

	std::cin >> operator_symbol;

	std::cout << "";

	switch (operator_symbol) {

		case ('+'):

			answer = num1 + num2;
			break;

		case ('-'):

			answer = num1 - num2;
			break;

		case ('*'):

			answer = num1 * num2;
			break;

		case ('/'):

			answer = num1 / num2;
			break;

		default:

			std::cout << "Invalid Operator! Please enter a valid operator";
			break;
			return;

	}

	std::cout << "Answer: " << answer << std::endl;

}


void MeaningfulFunctions() {
	
	Product(5, 8);

	Quotient(5, 3);

	CalculatorProgram();
}