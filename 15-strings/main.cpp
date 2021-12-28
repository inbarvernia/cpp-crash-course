#include <iostream>
#include <string.h>
// The above module gives access to additional functions/methods available for strings

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
  
  std::cout << sizeof(moreText) << std::endl;
  // The above gives the size of moreText in bytes (and on systems where char = 1 byte, it should be 4, but could be something different on systems where chars have a different size in bytes)
  std::cout << strlen(moreText) << std::endl;
  // The above uses the strlen (string length) function, which we can access through the string.h library/module; this function ignores the null terminator '\0', so we should get 3

  // Even though we can still use C strings in C++, it's less recommended partly because of security issues; for examples:
  char text1[16];
  char text2[200];
  std::cin >> text2;
  // strcpy is a function from the string.h module which copies the content of a C string into another C string
  strcpy(text1, text2);
  // Because we're taking a string of 200 chars and copying it into a string with max 16 chars, we won't get an error, but will instead go over the bounds, which can cause issues, as previously explained

  return 0;
}