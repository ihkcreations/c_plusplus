#include <iostream>

int main()
{

    int num1{55};
    int num2{70};

    std::cout << "number 1 : " << num1 << std::endl;
    std::cout << "number 2 : " << num2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing Variables" << std::endl;

    std::cout << std::boolalpha;
    // To see the bool values in true and false

    std::cout << "num1 < num2 : " << (num1 < num2) << std::endl;
    std::cout << "num1 > num2 : " << (num1 > num2) << std::endl;
    std::cout << "num1 <= num2 : " << (num1 <= num2) << std::endl;
    std::cout << "num1 >= num2 : " << (num1 >= num2) << std::endl;
    std::cout << "num1 == num2 : " << (num1 >= num2) << std::endl;
    std::cout << "num1 != num2 : " << (num1 >= num2) << std::endl;
}