#include <iostream>

int main() {

  std::cout << "Please enter your name: ";

  std::string name;

  std::cin >> name;

  std::cout << "Please enter your age: ";

  int age;

  std::cin >> age;

  std::cout << "Your name is " << name << std::endl;
  std::cout << "You are " << age << " years old" << std::endl;

  return 0;
}