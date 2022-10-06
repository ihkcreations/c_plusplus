#include <iostream>

int main()
{

    int number1{13};
    int number2{16};

    int product{number2 * number1};
    int otherProduct{number1 * number2 * number2};

    std::cout << "The product is: " << product << std::endl;
    std::cout << "The other product is: " << otherProduct << std::endl;
}