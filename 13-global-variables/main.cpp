#include <iostream>
#include "includes/myfile.h"

int myFunction();
int x = 100;
// Declaring a variable here makes it global; this means it's accessible from any scope (function, loop, etc.) - not just in this file but also in other files
// If we want to make it global within this file but not be accessible from other files, we can declare it like this instead:
static int b = 100;

int main() {

  int a = 10;
  x += 10;
  myFunction();
  std::cout << addToX(5) << std::endl;

  return 0;
}

int myFunction() {
  std::cout << x << std::endl;

  // If we made a reference to the variable a here, we would get an error because it's not in scope within this function

  return 0;
}