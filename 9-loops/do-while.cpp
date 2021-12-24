#include <iostream>

int main() {

  int i;
  std::cin >> i;

  do {
    std::cout << i-- << std::endl;
  } while(i > 0);
  // The difference between the do while loop and while loop is that the while loop will only run if it initially meets the condition (i.e. if the condition evaluates to true when it begins), whereas a do while loop will run at least once regardless
  // E.g. in the example above and in the while.cpp file, if a user inputs 10 they will work the same way, but if a user types -9, the while loop won't output anything, whereas the do while loop will output -9 once and then stop

  return 0;
}