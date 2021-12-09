#include <iostream>

int main() {

    // //To declare a variable, we must declare the variable type followed by the variable name and assigning a value
    // int x = 10;
    // // And it can easily be assigned a new value like so:
    // x = 90;
    // x = 20;
    // // But `x = "Hello";` wouldn't work because C++ is statically typed, meaning a variable can't have a different data type assigned as its value (in this case, x is an int so cannot be assigned to a string value)

    // // Primitive Data Types:

    // // Numerical Data Types
    // // Integer:
    // // int i = 10;
    // // Short integer:
    // short int s = 20;
    // // (The short numerical type can also be declared without the int keyword, it's completely optional)
    // short sh = 11;
    // // int and short types work in the same way except short occupies fewer bytes, as we can demonstrate with the sizeof function:
    // std::cout << "Integer (int): " << sizeof(int) << std::endl;
    // std::cout << "Short (short): " << sizeof(short) << std::endl;
    //std::cout << "Long (long): " << sizeof(long) << std::endl;
    // // Since on this computer, a long int is the same size as an int (4 bytes), we can also look at the long long type to see how a larger type of int behaves:
    // std::cout << "Long (long long): " << sizeof(long long) << std::endl;

    // // reassigning the short integer we declared earlier to the largest number that can be represented by a short int data type (i.e. the largest number that fits into 2 bytes, i.e. the sizeof(short) we printed earlier
    // // Each byte contains 8 bits, and the conversion from bits in binary to decimal numbers can be made using the programmer setting on a computer calculator)
    // s = 65535;
    // std::cout << s << std::endl;
    // // The previous line will evaluate to -1, because it is a signed short, meaning instead of going from 0 up to that int, it goes from 0 up to half that int and from 0 down to half that int
    // // If we want to use all of the bytes only for positive numbers, we need to declare the variable as an unsigned short
    // unsigned short shorty = 65535;
    // std::cout << shorty << std::endl;
    // // This should print the number as expected; however, if we assign a number any larger than that to a short, it will print out 0 instead and we will get a warning: unsigned conversion from 'int' to 'short unsigned int':
    // shorty = 65536;
    // std::cout << shorty << std::endl;
    // // The reason why it print 0 is because after it reaches the maximum number it starts to count from the beginning again (65537 would print 1, etc.)

    // // The size of an int is 4 bytes, so the maximum number it can contain is 4,294,967,295
    // unsigned int integer = 4294967295;
    // std::cout << integer << std::endl;
    // // and the same happens if we assign it to a larger number than the max as with short:
    // integer = 4294967296;
    // std::cout << integer << std::endl;

    // if we try to calculate the max size of a long long integer in our Windows calculator, we see the number increasing but as it reaches 8 bytes it actually displays -1, because even the calculator goes into overflow and cannot display that number
    // (But 7.5 bytes get us up to 1,152,921,504,606,846,975)

    // Textual Data Types


    // Boolean



    return 0;
}
