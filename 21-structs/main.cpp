#include <iostream>

// A struct is a data structure that you can use to store variables of different data types together
struct myStruct {
  int i;
  std::string s;
  bool b;

  void test() {
    std::cout << "Test" << std::endl;
  }
};
// A struct is quite similar to a class, although there are some differences; for example: a struct's members are public by default, unlike a class where they are private
// It's also not considered best practice to use a struct for something that is better represented by a class and object; the basic rule of thumb is: if you want to use a classic data structure or something like that, use a struct, and if you want to represent an actual object like a person, a book, etc., use a class
// In C, structs are not quite as flexible and, for example, you can't declare a function within a struct in C (you can point to a function, but you can't have that function belong to a struct)

// A person is usually something you'd want to model using a class, but here we are going to use it just as an example of data that belongs together, to illustrate why structs are useful
struct person {
  std::string name;
  int age;
  char gender;

  void printInfo() {
    std::cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << std::endl;
  }
};

int main() {

  struct myStruct m1;
  m1.i =20;
  m1.s = "Hello";
  m1.b = true;

  std::cout << m1.i << '\n';
  std::cout << m1.s << '\n';
  std::cout << m1.b << '\n';
  m1.test();
  // Note that these values are unique to m1; if we create another myStruct, we will get random undefined values (except for "Test", which is just the output of a void function, not a value)

  struct myStruct m2;

  std::cout << m2.i << '\n';
  std::cout << m2.s << '\n';
  std::cout << m2.b << '\n';
  m2.test();

  struct person p1;
  p1.name = "Max";
  p1.age = 25;
  p1.gender = 'm';
  p1.printInfo();

  struct person p2;
  p2.name = "Anna";
  p2.age = 37;
  p2.gender = 'f';
  p2.printInfo();

  std::cout << sizeof(p2) << std::endl; // The size of a struct depends on the data types it contains; if we add any extra data (another int, float, bool, etc.), the size will be larger

  return 0;
}