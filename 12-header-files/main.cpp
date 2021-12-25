#include <iostream>
#include "includes/calculations.h"
// This is how we include the header file, which gives us access to the functionality within including/calculations.cpp

int main() {

  std::cout << add(10, 20) << std::endl;

  return 0;
}

// Note that for this to work we need to compile it correctly; if we simply ran "g++ -o main.exe main.cpp" (or "g++ main.cpp -o main.exe") we would get a compiler error because  we are using add() without including its definition/declaration
// For it to compile correctly we must add the additional files to the compilation command in the terminal: "g++ -o main.exe main.cpp .\includes\calculations.cpp" "g++ main.cpp -o main.exe .\includes\calculations.cpp"
// So, to use header files and files with additional implementation, we must include them using an include statement such as line 2, and also to compile them alongside the main file using the command above (in line 13)