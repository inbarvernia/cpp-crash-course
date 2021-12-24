#include <iostream>

int main() {

  float n1, n2;
  // Using floats instead of ints so that division works correctly
  char op;

  std::cout << "Enter the first number: ";
  std::cin >> n1;
  std::cout << "Choose an arithmetic operator: ";
  std::cin >> op;
  std::cout << "Enter the second number: ";
  std::cin >> n2;

  switch(op) {
    // The variable used in a switch statement (in this case op) can only be a short, byte, int or char

      case '+':
        std::cout << n1 + n2 << std::endl;
        break;

      case '-':
        std::cout << n1 - n2 << std::endl;
        break;

      case '*':
        std::cout << n1 * n2 << std::endl;
        break;

      case '/':
        std::cout << n1 / n2 << std::endl;
        break;

      case '%':
        std::cout << (int) n1 % (int) n2 << std::endl;
        // Typecasting to integers as the modulo operator doesn't work on floats (but modulo will work inaccurately if users type numbers with digits after decimal point)
        break;

      default:
        std::cout << "Invalid operator" << std::endl;
  }

  return 0;
}