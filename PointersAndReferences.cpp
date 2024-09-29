#include <iostream>

int PointersAndReferences() {

	int a = 1;

	int* p1 = new int(2);

	int** p2;

	p2 = &p1;

	int** p3 = new int*;

	*p3 = &a;

	// part b code insert

	std::cout << "&a = " << &a << std::endl;
	std::cout << "p1 = " << p1 << std::endl;
	std::cout << "&p1 = " << &p1 << std::endl;
	std::cout << "*p1 = " << *p1 <<std::endl;
	std::cout << "p2 = " << p2 << std::endl;
	std::cout << "&p2 = " << &p2 << std::endl;
	std::cout << "**p2 = " << **p2 << std::endl;
	std::cout << "p3 = " << p3 << std::endl;
	std::cout << "&p3 = " << &p3 << std::endl;
	std::cout << "&**p3 = " << &**p3 << std::endl;

	/*
		Answer 1

		&a = 000000FD2E1CF4C4
		p1 = 0000021AFA0F66A0
		&p1 = 000000FD2E1CF4E8
		*p1 = 2
		p2 = 000000FD2E1CF4E8
		&p2 = 000000FD2E1CF508
		**p2 = 2
		p3 = 0000021AFA104B20
		&p3 = 000000FD2E1CF528
		&**p3 = 000000FD2E1CF4C4
	*/

	/*
		
		delete p2 would return an error as it does not point to a dynamically allocated memory

		p3 = p2;
		p1 = &a;

		Will return and error as well. Since both p2 and p3 are pointing to the memory location of p1. But, since we changed p1 and
		assigned memory address of a to it, this directly affects p2 and p3 and creates a memory leak issue.
	*/

	

	delete p3;

	return 0;
}

