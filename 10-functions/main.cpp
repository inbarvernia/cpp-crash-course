#include <iostream>

// int add(int, int);
// The above is called a function signature; the reason why this is needed is because in C++, the file is read from top to bottom, so if, as in this example, we declared the add function below the main function, when the main function tried to call it we would get an error because add() is not defined
// For this example we could technically just move the add function above the main function, which would solve the problem, but sometimes we might have several functions that can call each other (e.g. within different conditional clauses) and then it wouldn't be possible for each of them to be before each of the others
// (It's also not considered best practice anyway, as the standard is to have the main function at the top, if there are even any other functions defined in the same file)
// Therefore what we do is add function signatures for all supporting functions at the top of the file, and that way avoid the errors, because the function has already been declared and is therefore recognised when it's called inside another
// The function signatures basically "tells" the programme that there is a function of that name that will be defined later on
int add(int, int=50, int=90);
// The =50 and =90 are a way of giving a default value to a parameter, for when that parameter is not specified; they have to be done in the function signature at the top, the compiler throws an error
// As in other languages, you have to assign default values from the rightmost one to the left, i.e. you can't give the first parameter or the middle parameter a default value and not give default values to the ones coming after it, otherwise there's no way for the programme to determine that you want to "skip" over a param when calling it with arguments (and you will get an error if you try it)
std::string add(std::string, std::string);
bool isGreaterThan(int, int);
void myFunction();
void staticDemo();

int main() {

  std::cout << add(10, 20) << std::endl;
  std::cout << add(10) << std::endl;
  std::cout << add(10, 20, 30) << std::endl;
  std::cout << add("Hello ", "World!") << std::endl;
  std::cout << isGreaterThan(10, 5) << std::endl;
  myFunction();
  // If we tried cout << myFunction() we would get an exception, because myFunction doesn't return anything, which means that it cannot pass any data into cout

  staticDemo();
  staticDemo();

  return 0;
}

/* int add(int x, int y) {
  return x + y;
} */

int add(int x, int y, int z) {
  // Declaring multiple functions with the same name is possible in C++ and is known as function overloading

  std::cout << "Using three parameters!" << std::endl;
  // The line above was added mostly to demonstrate that it can be a completely different function from the other add function, it doesn't have to be related
  return x + y + z;
}

std::string add(std::string s1, std::string s2) {
  // With function overloading, not only can we have multiple functions with the same name, but they don't even have to use the same data types (either as return values or as parameters)
  // However, if we tried to define another add function that takes the same number and type of arguments as another one, e.g. std::string add(int x, int y), we would get an error due to ambiguation - when we call add(10, 20), the programme has no way of knowing which of the add functions taking two ints as params we want - the one returning an int or the one returning a string
  return s1 + s2;
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

void staticDemo() {
  static int x = 0;
  // This is an example of when the static storage class can make a difference to functionality: here because we are maintaining the value of x in memory instead of reassigning it and freeing it everytime we call this function, when we call the function multiple times, the value of x keeps updating - it never resets to 0
  // If we remove the keyword static from line 63, we would just get the value 1 printed each time the function is called, because what happens is: it's assigned to memory as 0 (as declared in line 63), then incremented to 1, then output to the terminal, and then deleted from memory; if the function is called again, it will again be declared as 0, then incremented, etc., so we will always get the same value
  // Whereas because we use the static storage class, it never gets deleted from memory, so what happens is: The first time it's called, it's set to 0, then incremented, then output; it then remains in memory with its current value, so if it gets called again, it doesn't have its value reset/re-declared, and is instead directly incremented again and then output
  std::cout << ++x << std::endl;
}