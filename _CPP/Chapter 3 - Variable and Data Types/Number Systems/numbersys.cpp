#include <iostream>

int main()
{

    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0f;       // Hexadecimal
    int number4 = 0b00001111; // Binary

    // all of the variables will give the same result which is 15

    std::cout << "Number Systems " << std::endl;

    std::cout << "Number 1 is: " << number1 << std::endl;
    std::cout << "Number 2 is: " << number2 << std::endl;
    std::cout << "Number 3 is: " << number3 << std::endl;
    std::cout << "Number 4 is: " << number4 << std::endl;
}