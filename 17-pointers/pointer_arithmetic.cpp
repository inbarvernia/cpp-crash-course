#include <iostream>

int main() {

  int a = 10;

  int *ptr = &a;

  std::cout << ptr << std::endl;
  std::cout << ++ptr << std::endl;
  // By incrementing the pointer, we are changing the address that the pointer is pointing to
  std::cout << ++ptr << std::endl;
  std::cout << ++ptr << std::endl;
  std::cout << ++ptr << std::endl;
  std::cout << ++ptr << std::endl;

  // Because the pointer is now pointing to a different address, if we assign a new value to *ptr (i.e. to the contents of the address ptr is pointing to), it will not affect the value of a, because a is still stored in the original address ptr pointed to, not where it is pointing to now:
  *ptr = 20;
  std::cout << a << std::endl;
  // The way we have used it here is dangerous and not recommended, because we are randomly changing the value of whatever is stored in those addresses, and we don't know what we are changing, so can be overwriting important data this way

  // However, we can use this constructively to iterate through the elements/indices of an array (as an alternative to for loops and other iterators)
  int arr[10];
  int *first_el = arr;

  for (int i = 0; i < 10; i ++) {
    *(first_el + i) = i * 20;
  }

  for (int x : arr) {
    std::cout << x << std::endl;
  }

  // In pointer arithmetic, the size of the increment is determined by the size of the data type: for example, a pointer for an int will increment in 4, because ints take up 4 bytes; however, a pointer for a bool will increment by 1 because booleans only take up 1 byte:
  bool b = true;
  bool *boolptr = &b;

  std::cout << boolptr << std::endl;
  std::cout << ++ boolptr << std::endl;
  std::cout << ++ boolptr << std::endl;
  std::cout << ++ boolptr << std::endl;

  return 0;
}