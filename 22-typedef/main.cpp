#include <iostream>

// Typedef is a keyword that's used to define a new data type that takes on the properties of an existing data type
// For example, the below line creates a new data type (for the purpose of this programme) called age_t, which works in the same way as an unsigned int
typedef unsigned int age_t;
// In terms of naming convention, a type will usually end with _t (it will still work if you don't obey this convention, but you should probably stick with it)

int main() {

  unsigned int a = 20;
  age_t age = 20;
  // The data type of the above will be age_t, even though it can contain any value that the unsigned int a above it can contain
  // This is useful for type safety (i.e. the compiler will inform you if you are trying to use the wrong type of variable as an argument of a function, e.g. if a function is expecting an unsigned int and you give it an age_t instead)
  // Another benefit is readability, so that it's easy to tell what kind of thing the variable is describing (there is actually already a built in type within C++ called size_t, which is also some type of int)

  std::cout << age << std::endl;

  // Because age_t still contains essentially an unsigned int, you can still use it like an int, e.g. in calculations:

  std::cout << age + 60 << std::endl;

  return 0;
}
