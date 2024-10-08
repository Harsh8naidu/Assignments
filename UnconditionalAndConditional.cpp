#include <stdio.h>
#include <iostream>


// Answer 1

/*
    The errors in this code is that the iostream library hasn't been included, without it we can neither print the statements nor able to take any inputs.

    Another error is that back is referenced but it hasn't been defined anywhere in the code.


*/

// Function prototypes
void UnconditionalAndConditional();
void add(int& k, int i);
void subtract(int& k, int i);

void add(int& k, int i) {

    k = k + i;
    
}

void subtract(int& k, int i) {

    k = k - i;

}

void UnconditionalAndConditional() {

    int i, j, k = 0;

    for (int i = 0; i < 10; i++)

    {

        if (i == 0) {

            std::cout << "You have 10 inputs. First 4 inputs will be added together and the next 6 inputs will be subtracted from the accumulation of the first 4 inputs." << std::endl;

        }

        std::cout << "" << std::endl;

        std::cout << "Enter a number: " << std::endl;

        std::cout << "" << std::endl;

        std::cin >> j;

        if (j < 5) {

            add(k, i);

        }
        else {

            subtract(k, i);

        }

    }

    std::cout << "Final value of the accumulator is: " << k << std::endl;

}

