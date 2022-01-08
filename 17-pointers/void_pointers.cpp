#include <iostream>

int main() {

  int a = 20;

  // A void pointer can point to anything, regardless of data type
  // However, they should be saved for special, niche cases and are not recommended for beginners unless necessary
  void *vp = &a;

  std::cout << vp << std::endl;

  char myChar = 'A';

  // If we try to look up the memory address of myChar, we get something that isn't a memory address:
  std::cout << &myChar << '\n';
  // We can use void pointers to get the actual memory address in this case:
  std::cout << (void *) &myChar << '\n';


  return 0;
}