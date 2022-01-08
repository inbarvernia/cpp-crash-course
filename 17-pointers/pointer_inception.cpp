#include <iostream>

int main() {

  int a = 10;

  int *ptr = &a;

  int **pptr = &ptr;

  std::cout << ptr << '\n';
  std::cout << pptr << '\n';

  return 0;
}