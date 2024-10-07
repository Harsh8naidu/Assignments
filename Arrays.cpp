#include <iostream>


void PrintName(const char name_array[]) {

	std::cout << name_array << std::endl;

}

void Battleship(bool* battleship_arr[][], int n, int row, int col) {

	if (n <= 0)

		std::cout << "No more guesses left!" << std::endl;
		return;

	std::cout << "Guess where the battleship is by entering the right coordinates!" << std::endl;

	std::cout << "";

	std::cout << "Enter the row: ";

	std::cin >> row;

	std::cout << "";

	std::cout << "Enter the column: ";

	std::cin >> col;

	std::cout << "";

	n--;

	if (!battleship_arr[row][col]) {

		Battleship(battleship_arr, n, row, col);

	}
	else {
		std::cout << "Congrats! You guessed it right.";
	}

	
}

void Arrays() {
	
	// Answer 1

	char full_name[12] = "Harsh Naidu";
	
	PrintName(full_name);

	// Answer 2

	char* first = new char[6];
	char* last = new char[6];
	
	strcpy_s(first, 6, "Harsh");
	strcpy_s(last, 6, "Naidu");

	std::cout << "First Name: " << first << std::endl;
	std::cout << "Last Name: " << last << std::endl;

	delete first;
	delete last;

	const int rows = 5;
	const int cols = 5;

	int row = 0;
	int col = 0;

	bool battleship_arr[rows][cols] = {false};

	int num_guesses = 5;

	battleship_arr[0][0] = true;
	battleship_arr[1][1] = true;
	battleship_arr[2][2] = true;
	battleship_arr[3][3] = true;
	battleship_arr[4][4] = true;

	Battleship(battleship_arr, num_guesses, row, col);
}