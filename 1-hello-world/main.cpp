#include <iostream>
// iostream is the input/output library and needs to be imported using this syntax so that we can use the cout function to output to the terminal

int main() {
    // This is the entry point of the script, so the entire programme needs to be inside this function
    // int specifies the data type of the function, i.e. a function that returns an integer
    std::cout << "Hello World!" << std::endl;
    // This is how you access the cout function of the std namespace from the iostream module we imported
    return 0;
}
