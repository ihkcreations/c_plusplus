#include <iostream>

int main()
{

    // lamda function with parameters
    [](double a, double b)
    {
        std::cout << "a + b = " << a + b << std::endl;
    }(14.3, 20.3);

    // lamda funtion without parameters
    auto funct = []()
    {
        std::cout << "Simple Message " << std::endl;
    };

    funct();
    funct();
    funct();
    funct();
    funct();
}