#include <iostream>

// Extern storage class:
extern int e;
// This storage is intended specifically for projects using multiple cpp files
// Using extern basically gives access to a variable that has been declared in another file (i.e. the above would only make sense if there was an int e or boolean e or something in another file that needs to be used by this file too)

int main() {

  // Because we have 'imported' the e variable from another file into this file, we can then refer to and use e as a variable within the main function here
  std::cout << e + 10 << std::endl;

  return 0;
}