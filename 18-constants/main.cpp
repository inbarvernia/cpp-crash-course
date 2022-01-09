#include <iostream>

int main() {

  // We can use the const keyword to save any data type as a constant (if we do not use it, it's automatically understood as a variable)
  // A constant is essentially a read-only, or immutable variable (i.e. it can't be reassigned or incremented)
  const int MY_CONST = 10;

  std::cout << MY_CONST << '\n';
  std::cout << MY_CONST + 20 << '\n';

  int b = MY_CONST;

  
  std::cout << b << '\n';
  b += 50;
  std::cout << b << '\n';

  return 0;
}