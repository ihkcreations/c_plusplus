#include <iostream>

int main()
{

    int number1{13};
    int number2{16};

    int diff{number2 - number1};
    int otherDiff{number1 - number2 - number2};

    std::cout << "The difference is: " << diff << std::endl;
    std::cout << "The other difference is: " << otherDiff << std::endl;
}