#include <iostream>


void PrintName(const char name_array[]) {

	std::cout << name_array << std::endl;

}

void Arrays() {
	
	// Answer 1

	char full_name[12] = "Harsh Naidu";
	
	PrintName(full_name);

	char* first = new char[6];
	char* last = new char[6];
	
	strcpy_s(first, 6, "Harsh");
	strcpy_s(last, 6, "Naidu");

	std::cout << "First Name: " << first << std::endl;
	std::cout << "Last Name: " << last << std::endl;

	delete first;
	delete last;

}