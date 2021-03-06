#include <iostream>

int main() {

  // Typecasting = taking one data type and converting it into another data type
  std::string s = "1023";
  // If we wanted to use s in a calculation and tried, e.g. (std::cout << s + 100 << std::endl;) for example, we would get an error/warning about a mismatch of data types (string and int)
  // From C++11 onwards, the way we do this is using the stoi (= string to int) function, like so:
  int i = stoi(s);

  std::cout << i + 100 << std::endl;

  // We need to use the stoi function because a string is not a primitive data type; for other data types we don't need a special function and instead use basic typecasting, like so:
  (int) 10.92;

  // C++ also typecasts automatically if you save the value of one data type into a variable of another data type, for example:
  float f = 56.724;
  int x = f;
  std::cout << x << std::endl;

  // The difference is when you typecast manually (using e.g. (int) 25.6432) you don't have to save the new integer as a separate variable but can use it directly instead
  std::cout << (int) f << std::endl;
  // You can also use typecasting within a calculation:
  std::cout << (int) f + 90 << std::endl;

  // Typecasting is important when dividing an int by another int, as this results in rounding down to the nearest int:
  int a = 7, b = 3;
  std::cout << a / b << std::endl;
  // Whereas if they are typecast into floats, you will get a more accurate result:
  std::cout << (float) a / (float) b << std::endl;

  // Because strings aren't a primitive data type, just as converting a string into an int requires a special function, so does converting an int (or other data type) into a string:
  std::string seven = std::to_string(a);

  std::cout << seven << std::endl;
  // Of course, for this example we don't see a difference betwen this and cout << a << endl, because the output is the same
  // But it becomes useful if we need to use an int as a string, for example to append it to another string, as here:
  std::string newstring = "This number is: ";

  std::cout << newstring + seven << std::endl;
  // If we try to substitute seven with a here, we will get a type mismatch error

  return 0;
}