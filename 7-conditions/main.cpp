#include <iostream>

int main() {
  int a;
  std::cin >> a;

  if (a > 100) {
    std::cout << "Your number is greater than 100!" << std::endl;
  } else if (a > 50) {
    std::cout << "Your number is greater than 50 but not greater than 100!" << std::endl;
  } else {
    std::cout << "Your number is not greater than 50!" << std::endl;
  }

  return 0;
}