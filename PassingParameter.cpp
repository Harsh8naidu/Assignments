#include <iostream>;

void f1(void* d, int s)

{
    // Answer 1

    /*
        We will get nonsensical values or garbage output if the line 8 and line 15 remains the same. This is because the code attempts 
        to pass the size of the pointers instead of passing the size of the data types. Since, the size of the pointer on an x64 system 
        will always be 8 bytes, this will result in improper execution of code. Only the if statment will be executed because the size 
        of a pointer is 8 bytes and so is the size of double. On the other hand, the else if statement will not be executed, because 
        the size of an int is 4 bytes.
    */

    // Answer 2

    /*
        We will get the same result as Answer 1 because most c++ compilers will interpret ++*p as ++(*p). This is because ++ has a higher
        precedence than *.
        
    */

    // Answer 3
       
    /*
        If the Line 8 and 15 are replaced by *p++, this will first dereference the address the pointer is pointing to and get the value.
        But, it will not increment that value. Instead, it will increment the pointer due to operator precedence. So, now the pointer
        points to the next memory address.
    */

    // Answer 4

    /*
        
    */

    if (s == sizeof(double))

    {

        double* p;

        p = (double*)d;

        *p++; //LINE 8

    }

    else if (s == sizeof(int))

    {

        int* p;

        p = (int*)d;

        *p++; //LINE 15

    }

}

int PassingParameter() {

    double v1[] = { 25, 75, 100 };

    int v2[] = { 72, 76, 98 };

    double* p1 = v1;

    int* p2 = v2;

    f1(&v1, sizeof(p1));

    f1(&v2, sizeof(p2));

    // Answer 4

    /*
        
        We get garbage nonsensical values again if we replace v1 and v2 by &v1 and &v2. Because &v1 and &v2 are pointing to the address
        of the array in the memory. But, in c++, we are printing it using std::cout which does not know how to interpret v1 and v2 as
        one is an array of double type while the other is an array of int type. We are getting garbage values because c++ interprets
        them as character pointer (c style strings). But, v1 and v2 are not string, so the result ends up being garbage values.
    */

    std::cout << &v1 << " " << &v2 << std::endl; //LINE 24 

    return 0;

}