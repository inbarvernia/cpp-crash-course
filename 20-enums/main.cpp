#include <iostream>

enum Color {
  RED, GREEN, BLUE, PURPLE, ORANGE, YELLOW
};
// Enums are a way of storing string-like data in such a way that it is given a numerical value, which can then be used to represent them
// This is clearer than assigning an int value to each one and keeping track of which is which, but is more concise (and possibly more memory-efficient?) than using multiple strings, especially when you only want to allow the programme a limited number of options, such as directions or basic colors
// Enums are also very useful for switch case statements

int main() {

  std::cout << BLUE << std::endl;

  // We can also declare variables that take their value from the enum, which looks a bit like declaring a class object:
  Color myColor = ORANGE;
  std::cout << myColor << std::endl;

  // If we tried to create a Color variable that was not declared inside the enum, we would get an error, e.g. if we uncomment the below:
  // Color anotherColor = CYAN;

  return 0;
}