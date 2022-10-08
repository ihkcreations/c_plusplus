#include <iostream>

int main()
{
    /*
    int *ptrNumber1{nullptr};
    ptrNumber1 = new int;

    delete ptrNumber1;
    ptrNumber1 = nullptr;
    */

    int *p_number1{new int};
    int *p_number2{new int(22)};
    int *p_number3{new int{30}};

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;

    std::cout << "p_number1 : " << p_number1 << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    std::cout << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;
    std::cout << "*p_number2: " << *p_number2 << std::endl;

    std::cout << std::endl;
    std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3: " << *p_number3 << std::endl;

    delete p_number1;
    p_number1 = nullptr;

    delete p_number2;
    p_number2 = nullptr;

    delete p_number3;
    p_number3 = nullptr;

    // can reuse the pointer like this
    p_number1 = new int(820);
    std::cout << std::endl;
    std::cout << "p_number 1 : " << *p_number1 << std::endl;
}