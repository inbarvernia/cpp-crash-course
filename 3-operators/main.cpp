#include <iostream>

int main() {

  // // Arithmetic Operators (+ - * / %)
  // int a = 10, b = 20;
  // std::cout << a * b / 5 + 2 << std::endl;
  // std::cout << b % a << std::endl;

  // Assignment Operators
  int a = 20;
  // The = above is an assignment operator
  a = a + 10;
  // As with other programming languages, you can use the assignment operator in combination with arithmetic operators, e.g. +=:
  a += 12;
  std::cout << a << std::endl;
  // Just as you can use +=, *=, -=, /=, you can also use %=:
  a %= 2;
  std::cout << a << std::endl;
  a += 20;
  // You can combine the assignment operator not just with arithmetic operators but also with other operator groups, such as bitwise operators (which we won't discuss here, but as an example):
  a &= 10;
  std::cout << a << std::endl;
  // Essentially, you can combine the assignment operator with other operators to save the results of the operation by assigning them to the variable

  return 0;
}