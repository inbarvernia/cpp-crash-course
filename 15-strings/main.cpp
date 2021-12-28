#include <iostream>

int main() {

  // In C++, strings are objects / instances of the String class, whereas in C there are no classes, so strings are actually arrays of chars
  // For example, in C, the way we would declare a string is as an array of chars, like so:
  char text[10] = "Hello";
  // Note that the above can only contain up to 9 characters, because the last character in the char array is reserved for the so called NULL character / NULL terminator '\0', which is essentially the char equivalent of the int 0, and is generally used to mark the end of a string
  // It's also important to remember that in C++, we can still run C code/syntax and access C libraries/modules
  std::cout << text << std::endl;

  // Similarly:
  char moreText[4];
  moreText[0] = 'H';
  moreText[1] = 'e';
  moreText[2] = 'y';
  // moreText[3] = '\0';
  // The above line is implicit and will essentially be added automatically if not added manually - but if we declared char moreText[3] it would cause issues because we are not leaving an available char for '\0'
  
  std::cout << moreText << std::endl;

  return 0;
}