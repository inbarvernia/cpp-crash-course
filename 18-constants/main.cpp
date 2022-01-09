#include <iostream>

int main() {

  // We can use the const keyword to save any data type as a constant (if we do not use it, it's automatically understood as a variable)
  // A constant is essentially a read-only, or immutable variable (i.e. it can't be reassigned or incremented)
  const int MY_CONST = 10;

  std::cout << MY_CONST << '\n';
  std::cout << MY_CONST + 20 << '\n';

  int b = MY_CONST;

  
  std::cout << b << '\n';
  b += 50;
  std::cout << b << '\n';

  // We can also have constant pointers; there are two different syntaxes for this:
  const int *p1 = &b;
  int* const p2 = &b;
  // The difference between these two pointers is what is constant about them
  // (b remains a variable in any case and can still be reassigned or incremented)

  // The syntax for p1 requires that we treat the variable it's referring to as a constant when we access it through the pointer
  // So, for example, *p1 = 20; would through an error, because we're trying to reassign b through p1 (even though b = 20 would still work)
  // However, we CAN reassign p1 itself so that it's now pointing to a different adress (where a different variable is stored); e.g.:

  int c = 30;
  p1 = &c;

  // For p2, because of the ordering of the keywords, it's the other way around:
  *p2 = 20;
  std::cout << b << '\n';

  // And p2 is a constant pointer in the sense that we can't change what we're pointing to; so, ther below would cause an error:
  // p2 = &c;

  // You can also create an extra strict pointer by combined the two syntax options:
  const int* const p3 = &b;

  std::cout << *p3 << '\n';

  // For this, both *p3 = 17 and p3 = &c would cause errors

  return 0;
}