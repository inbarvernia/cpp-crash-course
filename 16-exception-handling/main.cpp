#include <iostream>

float divide(float f1, float f2) {
  if(f2 == 0) {
    throw 15;
    // Throw is a keyword for throwing exceptions, and 15 is the error code
    // It is possible to create one's own exceptions, or to use libraries for common exceptions
  } else {
    return f1 / f2;
  }
}

int main() {

  // Whenever possible, it's best to prevent possible errors using if statements
  // However, when not possible to solve using if statements or is hard to anticipate, we can use try/catch statements to to stop these errors from causing the programme to crash

  float f1;
  float f2;

  std::cin >> f1;
  std::cin >> f2;

  // std::cout << divide(f1, f2) << std::endl;

  try {
    std::cout << divide(f1, f2) << std::endl;
  } catch (int e) {
    // std::cerr << "Error!" << std::endl;
    // We could keep the above line for a generic error message, or we could even have different error messages for specific error codes, e.g.:
    if (e == 15) {
      std::cerr << "Division by 0 is undefined!" << std::endl;
    } else {
      std::cerr << "Error!" << std::endl;
    }
  }

  std::cout << "If there was an error, it didn't cause the programme to crash" << std::endl;
  // If we comment out the try/catch statements and uncommented out line 24, then assigned f2 the value 0, we would not see the line above because the programme would crash prior to executing that line

  return 0;
}