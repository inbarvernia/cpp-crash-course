#include <iostream>
// The above is an example of a pre-processor directive

// Pre-processor directives are things that need to happen before the programme is compiled; they are always initialised with a # symbol
// #include is a common example, but there are many others
// What #include does is takes everything in the script it refers to (whether it's iostream, a library or a header file) and includes that code in the file to be compiled

// Another common directive: #define
// We can use it to define a macro, for example:
#define PI (3.141592)
// The difference between this and defining a constant or variable is that here every occurrence of the identifier PI is replaced with the number in parenthesis *before* the programme is compiled
// #define can also contain strings or other data types:
#define SHARED_MEMORY_NAME "myshared_mem"


int main() {

  std::cout << PI << '\n';
  std::cout << SHARED_MEMORY_NAME << '\n';

  return 0;
}