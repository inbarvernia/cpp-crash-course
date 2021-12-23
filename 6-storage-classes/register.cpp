#include <iostream>

int main() {

  // Register storage class:

  register int i = 10;

  // What this does is, (if possible) it save the variable to a CPU register instead of the RAM (thereby making it faster to access, because it's already in the CPU instead of having to be retrieved from the RAM by the CPU)
  // (If possible - because we don't always have free registers; if there are no free registers it will be allocated to RAM again instead)
  // Because of this, this can increase performance, but only if it's used selectively/sparingly, because otherwise you will run out of free registers and it will no longer be effective
  // Important to note: if you use the register storage class, you won't be able to use pointers (we will get to those later, but essentially they show the 'address' where something is stored in the RAM - here it will not have one, since it's not stored in the RAM)


  return 0;
}