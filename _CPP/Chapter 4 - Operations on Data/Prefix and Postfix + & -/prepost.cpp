#include <iostream>

int main()
{

    int value{5};
    value = value + 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // resetting the value
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // resetting the value
    std::cout << "incrementing " << value++;
    std::cout << " to : " << value << std::endl;

    value = 5; // resetting the value
    std::cout << "decrementing " << value--;
    std::cout << " to : " << value << std::endl;

    value = 5; // resetting the value
    std::cout << "Incremented to : " << ++value << std::endl;

    value = 5; // resetting the value
    std::cout << "Decremented to : " << --value << std::endl;
}