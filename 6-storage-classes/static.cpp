#include <iostream>

int main() {

  // In the automatic storage class, memory is allocated to variables while they're within scope, and they are then deleted from memory as soon as they are out of scope
  // So, for example, if the main function called another function which created int b, int be would be allocated memory when the second function was called and then deleted from memory as soon as it had finished; if that function were then called again, memory would be allocated to int b anew, and then deleted anew etc.
  // The static class is used when we don't want this to happen - so, if we want a variable to stay in memory until the programme had finished running instead of being cleared from memory and reallocated based on when it's in scope

  static int a = 10;

  // In this example this isn't making a difference, because the main function is the entire programme, so the variable is staying in memory regardless, but it would make a difference if static was used for another function which was being called by the main function

  // The advantage of the static class is that, because a variable remains in memory rather than being allocated memory, freed from memory, then reallocated, then freed again, it is constantly accessible, which can in some cases increase performance
  // Therefore it is useful for variables within the scope of functions that get called repeatedly and frequently, when this difference to performance is significant

  return 0;
}