#include <iostream>

int main() {

  // // Arithmetic Operators (+ - * / %)
  // int a = 10, b = 20;
  // std::cout << a * b / 5 + 2 << std::endl;
  // std::cout << b % a << std::endl;

  // // Assignment Operators
  // int a = 20;
  // // The = above is an assignment operator
  // a = a + 10;
  // // As with other programming languages, you can use the assignment operator in combination with arithmetic operators, e.g. +=:
  // a += 12;
  // std::cout << a << std::endl;
  // // Just as you can use +=, *=, -=, /=, you can also use %=:
  // a %= 2;
  // std::cout << a << std::endl;
  // a += 20;
  // // You can combine the assignment operator not just with arithmetic operators but also with other operator groups, such as bitwise operators (which we won't discuss here, but as an example):
  // a &= 10;
  // std::cout << a << std::endl;
  // // Essentially, you can combine the assignment operator with other operators to save the results of the operation by assigning them to the variable
  
  // // You can also use increment and decrement operators (++, --), as in JavaScript
  // int b = 10;
  // b++;
  // std::cout << b << std::endl;
  // // In C++, you can increment by using either b++ or ++b (or b += 1, or b = b + 1)
  // // The difference is in what is being returned: in b++, the value of b is returned and then incremented
  // std::cout << b++ << std::endl;
  // // The value printed will be the previous value of b; however, if we then print the current value of b, we will see it's higher by 1:
  // std::cout << b << std::endl;
  // // However, if we use one of the other syntax options (++b or (b += 1)), the value will be incremented first and returned already with its updated value:
  // std::cout << (b += 1) << std::endl;
  // // And since the value has already been updated, it will remain the same:
  // std::cout << b << std::endl;
  // // This same logic applies for decrementing (b--)

  // // Comparison Operators (Relational): == != > < <= >= (These operators always return a boolean value)

  // int a = 10, b = 20;

  // std::cout << (a < b) << std:: endl;
  // // Evaluates as 1 which, as previously explained, represents true
  // std::cout << (a >= b) << std:: endl;
  // std::cout << (a != b) << std:: endl;

  // // Logical Operators: && || !
  // int a = 10, b = 20;

  // std::cout << ((a < b) && (a > 5)) << std::endl;
  // std::cout << ((a < b) && (a > 15)) << std::endl;
  // std::cout << ((a < b) || (a > 15)) << std::endl;
  // std::cout << ((a < b) || (a > 51)) << std::endl;
  // std::cout << (!(a < b)) << std::endl;

  // Bitwise Operators
  // This course won't go in-depth with these as they tend to not be used as much
  // They are used for performing binary operations

  // For example, these are the decimal and binary representations of two numbers:
  // 15 = 1111
  // 12 = 1100
  // Bitwise operators apply logic to a specific bit or digit within the binary number, e.g. taking two binary numbers and applying logic to the last digit of both, or the penultimate digit of both, etc.
  

  return 0;
}