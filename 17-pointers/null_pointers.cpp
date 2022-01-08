#include <iostream>

int main() {

  int a = 10;

  int *ptr = &a;

  // After we have finished using a pointer, sometimes we want it to stop pointing to any specific memory address and instead point to nothing
  // There are some outdated ways of doing this which may still appear in legacy code, so it's important to be familiar with those as well as the best practice

  // Some of the outdated ways are:
  ptr = 0;
  ptr = NULL; // This is the way null pointers are done in C

  // The best practice C++ way of doing it is:
  ptr = nullptr;

  // NULL evaluates to 0, while nullptr just evaluates as nothing and that is part of the reason why those two ways can cause issues
  // However, using comparison operators, nullptr == 0 does return true even though they don't evaluate to the same thing; this is to avoid problems when interating nullptr with older code bases
  std::cout << (nullptr == 0) << '\n';

  return 0;
}