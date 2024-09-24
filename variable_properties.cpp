# include < iostream > 


// Answer 1

/*
    Since integer has 4 bits, there are 16 possible values that an integer can be represented in.The main difference between a signed and an unsigned integer is that a signed integer can never be negative. For example 1110 and 1111 can be represented as 14 and 15
    whereas in unsigned integer 1110 and 1111 can be represented as -2 and -1.
*/ 
   
 int variable_properties() {



      std::cout << " Hello " << ' ' << " World " << "\n";

      std::cout << " What is 7 + 2?" << "\n";

	  int x;

// Answer 2

      char a = 'a';

      bool flag = true;

      double d = 7.6;

      std::cout << " Value of a: " << a << "\n";

      std::cout << " Value of flag: " << flag << "\n";

      std::cout << " Value of d: " << d << "\n";

      //cin >> x

// Answer 3

      int val1;
      
      int val2;

      std::cout << " Enter val1: " << std::endl;

      std::cin >> val1;

      std::cout << " Enter val2: " << std::endl;

      std::cin >> val2;

      

      std::cout << " Sum of val1 and val2 is: " << val1 + val2 << "\n";

      std::cout << " Product of val1 and val2 is " << val1 * val2 << "\n";

// Answer 4

      std::string myName;

      std::cout << " Enter your name: " << std::endl;

      std::cin >> myName;

      std::cout << " Hello " + myName;

      return 0;

}