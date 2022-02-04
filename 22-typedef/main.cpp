#include <iostream>

// Typedef is a keyword that's used to define a new data type that takes on the properties of an existing data type
// For example, the below line creates a new data type (for the purpose of this programme) called age_t, which works in the same way as an unsigned int
typedef unsigned int age_t;
// In terms of naming convention, a type will usually end with _t (it will still work if you don't obey this convention, but you should probably stick with it)

// For a concrete, let's say we want to create a data type called byte that will only use one byte of memory, and we want to use it for calculations
// Although we already have data types that only allocate 1 byte each (char and bool), we would not expect to use them for calculations, so it's better to define a new type, so that we can differentiate e.g. between a char that we are using as a character and a byte that we are using for calculations
typedef unsigned char byte_t;

int main() {

  unsigned int a = 20;
  age_t age = 20;
  // The data type of the above will be age_t, even though it can contain any value that the unsigned int a above it can contain
  // This is useful for type safety (i.e. the compiler will inform you if you are trying to use the wrong type of variable as an argument of a function, e.g. if a function is expecting an unsigned int and you give it an age_t instead)
  // Another benefit is readability, so that it's easy to tell what kind of thing the variable is describing (there is actually already a built in type within C++ called size_t, which is also some type of int)

  std::cout << age << std::endl;

  // Because age_t still contains essentially an unsigned int, you can still use it like an int, e.g. in calculations:

  std::cout << age + 60 << std::endl;

  byte_t b = 70;

  std::cout << b << std::endl; // The problem is when you do it like this, it gets treated like a character, and prints F instead of 70
  // One way around it is:
  std::cout << unsigned(b) << std::endl;

  // One of the interesting thing about this is that if we declare another byte_t and then add the two together, it will automatically be output as a number rather than a character, because it has been involved in a calculation
  byte_t c = 30;
  std::cout << b + c << std::endl;

  // However, if we store the result of the calculation inside another variable, it will output as a character again:
  byte_t d = b + c;

  std::cout << d << std::endl;

  // We can see that any of the byte_t variables is only 1 byte (or, the size of a char):
  std::cout << sizeof(b) << std::endl;

  return 0;
}
