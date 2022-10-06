#include <iostream>

int main()
{

    int number1{13};
    int number2{16};

    int sum{number1 + number2};
    int otherSum{number1 + number2 + number1};

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The other sum is: " << otherSum << std::endl;
}