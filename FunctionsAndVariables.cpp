#include <iostream>;


void v1(char* a, const char* b) {

	// Answer 1. a)

	/*
		We are assigning the pointer that pointer of b to the pointer of a until b is null character in the code. But since b is set to const, it cannot be changed in the code.
	*/

	while (*b != '\0') {

		*a = *b;
		a++;
		b++;

	}

	*a = '\0';

}

void FunctionsAndVariables() {

	char a[100];

	const char* b = "Hello World!";

	v1(a, b);

	printf("Copied string: %s\n", a);

}