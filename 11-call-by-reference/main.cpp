#include <iostream>

void myFunction(int);
void refFunction(int &x);

int main() {

  int a = 10;
  myFunction(a);
  std::cout << a << std::endl;
  // We can see that the value of a doesn't change; this is because we're not actually passing the variable a itself into the function, but rather assigning the value of a to the parameter x

  refFunction(a);
  std::cout << a << std::endl;
  // Whereas here, because we've used a call by reference in the refFunction definition, calling refFunction actually changes the value of a, which is why when we then output of a it matches the function output

  myFunction(a);
  // We can also see the above when we call myFunction with a again - the value of a taken here is its value after it is updated by refFunction

  return 0;
}

void myFunction(int x) {
  x++;
  std::cout << x << std::endl;
}

void refFunction(int &x) {
  // The use of &x turns this into a call by reference, which means rather than taking just the value of the argument and assigning it to x, we're actually taking the address reference of where the argument variable is stored in memory, so that when we're manipulating x within this function, we will manipulate the variable itself and not just its value, i.e. x will be a reference to a itself and not just to the value of a
  x++;
  std::cout << x << std::endl;
}