#include <iostream>

int main()
{

    char value = 65;
    char value2 = 66;

    std::cout << "value : " << value << std::endl;   // will print A
    std::cout << "value 2: " << value2 << std::endl; // will print B

    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;   // will print the value of A
    std::cout << "value2(int) : " << static_cast<int>(value2) << std::endl; // will print the value of B
}