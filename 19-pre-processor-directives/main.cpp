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

// We can also define function-like macros, but this can be risky, for example:
#define square(a) a * a
// The reason why this can be risky is demonstrated in the example below, with int i = 5, where we compare the above square macro with the below squareFunct function
int squareFunct(int num) {
    return num * num;
}

// Another pre-processor directive is #undef, which is a way to undefine something that has previously been defined; for example:
#undef PI
// If we try to output PI later in the programme, we will now get an error when compiling
// This can be useful if, for example, we need to define something with a name that is likely to appear in the names of other things (for example, if we #define E (2.71828) to use the mathematical constant in calculations, it would then be useful to #undef E so that not every instance of the letter E gets converted to this number)

// We can also use directives like #ifdef which only execute if something is defined, or #ifndef which only executes if something is not defined
// For example, at the moment only the #ifndef code inside the main function is being executed; if we commented out #undef TRIGGER, only the #ifdef code would be executed instead
#define TRIGGER
#undef TRIGGER

int main() {

  // std::cout << PI << '\n';
  std::cout << SHARED_MEMORY_NAME << '\n';
  
  int arr[MAX_ARR_SIZE];

  int i = 5;
  std::cout << square(i++) << std::endl;
  std::cout << i << std::endl;
  // Versus:
  int a = 5;
  std::cout << squareFunct(a++) << std::endl;
  std::cout << a << std::endl;
  // When we declare the function as normal (squareFunct), we take the original value of a (5) as an argument, so we multiply a * a within the function (which is then the return value of the function: 5 * 5 = 25), and only then increment a, so that the final value of of a is a + 1, meaning 6 in this case
  // However, when we use the square macro instead, we take the original value of i (5), then increment i by 1 (6), and then take this new value as the second i in our function-like macro (and then increment i again), meaning we are actually multiplying 5 * 6 (= 30), which will be the return value of square(i); because we have incremented i again after taking its value of 6, its final value is 7

  #ifdef TRIGGER
  std::cout << "TRIGGER is defined!" << std::endl;
  #endif

  #ifndef TRIGGER
  std::cout << "TRIGGER is not defined!" << std:: endl;
  #endif

  return 0;
}