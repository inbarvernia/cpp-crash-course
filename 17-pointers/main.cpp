#include <iostream>

int main() {

  int a = 10;

  // &a gives us the memory address of a
  std::cout << &a << std::endl;

  // If we store a memory address in a variable, then it becomes a pointer; e.g., *myptr below is a pointer
  int *myptr = &a;

  // The below prints out the pointer, i.e. the memory address of a, which should be identical to &a:
  std::cout << myptr << std::endl;

  // We can also de-reference the pointer by adding an asterisk before it; instead of giving the value of the pointer (i.e. the address of a), it will instead give the value of the thing that the pointer is pointing to (i.e. the value of a itself):
  std::cout << *myptr << std::endl;

  // We can use the de-referenced pointer (i.e. with the asterisk) to assign a new value to the variable it's pointing to; this will affect the value of the variable even when accessed directly and not through the pointer
  *myptr = 20;

  std::cout << a << std::endl;

  int arr[100];
  // When we creat an array, we are allocating the space for the number of elements and the data type, in this example, 400 bytes, or 100 times 4 bytes (the size of an int)
  // In doing this, an address is allocated for the first item, and then adjacent addresses are allocated to subsequent values
  
  // The address for the array itself is the same as the address for the first item:
  std::cout << &arr << std::endl;
  std::cout << &arr[0] << std::endl;
  // And we can see that the addresses for the next items follows in increments of 4, allowing for 4 bytes of data for each:
  std::cout << &arr[1] << std::endl;
  std::cout << &arr[2] << std::endl;

  // When creating a pointer for an array, we don't need to use the & symbol:
  int *arrptr = arr;

  std::cout << arrptr << std::endl;

  return 0;
}