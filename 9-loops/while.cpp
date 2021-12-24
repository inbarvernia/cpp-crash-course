#include <iostream>

int main() {

  int i;
  std::cin >> i;

  while (i >= 0) {
    std::cout << i-- << std::endl;
    // As discussed previously, i-- will return the previous value and then decrement it, so this statement will result in the current value of i being printed, and then i being decremented for the next iteration of the loop
    // Note that because we've used i >=0, the last value printed will be 0, but i will actually be set to -1 by the end because of the final increment; to avoid this, we can instead write while (i > 0) and then add an additional cout << i statement after the loop has finished
  }

  return 0;
}