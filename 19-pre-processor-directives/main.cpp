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
// #define creates what is known as a macro
// Macros are useful for defining some data that will not be changed and which needs to be available globally (a little bit like a globally available constant, although there are other differences between constants and macros; see for discussion: https://stackoverflow.com/questions/6393776/what-is-the-difference-between-a-macro-and-a-const-in-c)
// One example of an appropriate use of macros:
# define MAX_ARR_SIZE (16) // used in conjunction with int array below

int main() {

  std::cout << PI << '\n';
  std::cout << SHARED_MEMORY_NAME << '\n';
  
  int arr[MAX_ARR_SIZE];



  return 0;
}