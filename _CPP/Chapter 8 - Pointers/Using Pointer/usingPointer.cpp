#include <iostream>

int main()
{

    int num1{65};
    int *ptr{nullptr};

    ptr = &num1;

    std::cout << "Value : " << num1 << std::endl;
    std::cout << "Value of ptr: " << *ptr << std::endl;
    std::cout << "Address of ptr then: " << ptr << std::endl;

    std::cout << std::endl;
    int num2{86};
    ptr = &num2; // changing the address of ptr
    std::cout << "Address of ptr now: " << ptr << std::endl;
}