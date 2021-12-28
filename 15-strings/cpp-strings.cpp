#include <iostream>
#include <string.h>

int main() {

  // Here are different options of the C++ syntax for declaring strings (i.e. using string objects instead of char arrays):
  std::string s = "Hello World!";
  std::string s1("Hello Friend!");
  std::string s2;
  s2 = "Hello Darkness!";

  std::cout << s << " and " << s1 << " and " << s2 << std::endl;

  // Because this type of string declaration creates an instance of the String Class, it also gives us access to built-in String Class methods (which we can use to achieve the same things as the C string functions in the other files, though their names are slightly different):
  std::cout << s.length() << std::endl;
  // Similar to strlen for C strings, this also doesn't include the null terminator in the end (even though it's still there in C++ strings)

  // Even though these are no longer arrays, we can still use indices to access individual characters:
  std::cout << s[6] << std::endl;
  // However, there's also a specific method which does the same thing but which is considered clearer/better practice:
  std::cout << s.at(6) << std::endl;

  // To compare string objects, we don't even need a specific method, but can simply use comparison operators:
  if (s == s2) {
    std::cout << "s and s2 are the same" << std::endl;
  } else {
    std::cout << "s and s2 are not the same" << std::endl;
  }
  // Or even:
  std::cout << (s == s2) << std::endl;

  // We also don't need a specific strcat function, because we can simply use addition to combine strings:
  std::string combined = s + " " + s1;
  std::cout << combined << std::endl;

  return 0;
}