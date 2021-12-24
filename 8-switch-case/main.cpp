#include <iostream>

int main() {

  int x;
  std::cin >> x;

  switch(x) {

    case 8:
      std::cout << "The value was 8!" << std::endl;
      break;

    case 10:
      std::cout << "Do the action for input 10" << std::endl;
      break;

    default:
      std::cout << "The input didn't fulfill our specific conditions" << std::endl;
      break;
        
  }

  return 0;
}