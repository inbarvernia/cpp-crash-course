#include <iostream>

void function1() {
  std::cout << "I am function one!" << '\n';
}

void function2() {
  std::cout << "I am function two!" << '\n';
}

int main() {

  // To point to a function, the pointer must be the same data type and take the same number and type of arguments (e.g. the below wouldn't work if function1 or function2 took arguments)
  void(*myfunc)();

  myfunc = function1;

  myfunc();

  myfunc = function2;

  myfunc();

  return 0;
}