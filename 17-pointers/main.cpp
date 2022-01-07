#include <iostream>

int main() {

  int a = 10;

  // &a gives us the memory address of a
  std::cout << &a << std::endl;

  // If we store a memory address in a variable, then it becomes a pointer; e.g., *myptr below is a pointer
  int *myptr = &a;

  // The below prints out the pointer, i.e. the memory address of a, which should be identical to &a:
  std::cout << myptr << std::endl;

  // We can also dereference the pointer by adding an asterisk before it; instead of giving the value of the pointer (i.e. the address of a), it will instead give the value of the thing that the pointer is pointing to (i.e. the value of a itself):
  std::cout << *myptr << std::endl;

  return 0;
}