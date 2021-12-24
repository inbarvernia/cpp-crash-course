#include <iostream>

int add(int, int);
// The above is called a function signature; the reason why this is needed is because in C++, the file is read from top to bottom, so if, as in this example, we declared the add function below the main function, when the main function tried to call it we would get an error because add() is not defined
// For this example we could technically just move the add function above the main function, which would solve the problem, but sometimes we might have several functions that can call each other (e.g. within different conditional clauses) and then it wouldn't be possible for each of them to be before each of the others
// (It's also not considered best practice anyway, as the standard is to have the main function at the top, if there are even any other functions defined in the same file)
// Therefore what we do is add function signatures for all supporting functions at the top of the file, and that way avoid the errors, because the function has already been declared and is therefore recognised when it's called inside another
// The function signatures basically "tells" the programme that there is a function of that name that will be defined later on
bool isGreaterThan(int, int);
void myFunction();

int main() {

  std::cout << add(10, 20) << std::endl;
  std::cout << isGreaterThan(10, 5) << std::endl;
  myFunction();
  // If we tried cout << myFunction() we would get an exception, because myFunction doesn't return anything, which means that it cannot pass any data into cout


  return 0;
}

int add(int x, int y) {
  return x + y;
}

bool isGreaterThan(int x, int y) {
  return x > y;
}

void myFunction() {
  // a void function is a function that doesn't have a return value
  std::cout << "Hello World!" << std::endl;
}
// A function like the above, which takes no parameters, can also be declared & defined as myFunction(void) - in C++ myFunction() and myFunction(void) are the same, and the former is more commonly used, for brevity
// However, in C there is a difference between the two: myFunction(void) means myFunction is a function which takes no arguments, whereas myFunction() is a function that takes an unspecified number of arguments of unspecified type, so in C the distinction is important