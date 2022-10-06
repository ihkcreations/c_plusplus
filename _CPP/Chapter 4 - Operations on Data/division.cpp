#include <iostream>

int main()
{

    int number1{13};
    int number2{16};

    int quotient{number2 / number1};
    int otherQuotient{10 / 5};

    std::cout << "The quotient is: " << quotient << std::endl;
    std::cout << "The other quotient is: " << otherQuotient << std::endl;
}