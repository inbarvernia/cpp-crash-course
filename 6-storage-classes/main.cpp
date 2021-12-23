#include <iostream>

int main() {

  // Auto storage class (which is also the default storage class)
  // When using the auto storage class, the compiler 'decides' automatically how long a variable should be stored for
  auto a = 10;
  // is the same as:
  // int a = 10;

  // When declaring auto, the compiler automatically parses what type of variable it is, in this case an int; however, note that it is still statically typed, i.e. a will always be an int once declared like this
  // Because of this, it takes a fraction longer to compile when using 'auto a' vs. 'int a', since the compiler has an extra task, but this is negligible

  return 0;
}