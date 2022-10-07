#include <iostream>

int addNumbers(int firstNumber, int secondNumber)
{

    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{

    int firstNumber{20};
    int secondNumber{10};

    std::cout << "First number : " << firstNumber << std::endl;
    std::cout << "Second number : " << secondNumber << std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(firstNumber, secondNumber);
    std::cout << "Sum using function: " << sum << std::endl;

    sum = addNumbers(30, 8);
    std::cout << "Sum using function 2: " << sum << std::endl;

    return 0;
}