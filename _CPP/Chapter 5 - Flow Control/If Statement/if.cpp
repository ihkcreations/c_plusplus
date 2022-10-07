#include <iostream>

int main()
{
    int number1{55};
    int number2{60};

    bool result = (number1 < number2);

    std::cout << std::boolalpha
              << "result : "
              << result
              << std::endl;

    if (result == true)
    {
        std::cout << number1
                  << " is less than "
                  << number2
                  << std::endl;
    }
    else
    {

        std::cout << number1
                  << " is NOT less than "
                  << number2
                  << std::endl;
    }

    // ---------------------------------------------------//
    std::cout << std::endl;
    bool police_stop{true};
    bool green{true};

    if (green)
    {
        if (police_stop)
        {

            std::cout << "Stop" << std::endl;
        }
        else
        {

            std::cout << "Go" << std::endl;
        }
    }
}