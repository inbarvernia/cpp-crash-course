#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;

  // In all the programmes we've written so far, the programmes just run and immediately terminate
  // In order to stop this from happening, we can add the following line:
  std::cin.get();
  // This causes the programme to wait for user input before terminating; if we run the programme with this line, it will stay open for user input, and will only terminate once the user presses enter/return

  return 0;
}