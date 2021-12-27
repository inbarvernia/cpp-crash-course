#include <iostream>

int main() {

  int myArray[20];
  // When we initialise an array in C++, we have to specify the type of data that is going to be stored inside it (in this case, int), and also the number of items it will contain (in this case, 20)
  // This is so the compiler is able to allocate the memory needed; e.g. in this example, an int is 4 bytes, so an array of 20 ints will take 80 bytes of memory, so we will have an 80-byte section in the RAM/"stack" allocated for this array
  // It's also possible to go over the limit (i.e. over the number of slots originally specified), but it's not recommended

  for(int i = 0; i < 20; i ++) {
    std::cout << myArray[i] << std::endl;
  }
  // Because we have allocated twenty places to the array but not assigned any values to them, when we do this we get a strange mix of numbers, which are the values that were already stored in that section of memory

  int anotherArray[10] = {};
  // Adding ={} sets all of the items in the array to an initial value of 0

  for(int i = 0; i < 10; i ++) {
    std::cout << anotherArray[i] << std::endl;
  }

  int yetAnotherArray[10] = {10, 80, 33};
  // We can also add some numbers in the curly brackets to set the values of the first few numbers, and the rest of them will be automatically set to 0

  for(int i = 0; i < 10; i ++) {
    std::cout << yetAnotherArray[i] << std::endl;
  }

  return 0;
}