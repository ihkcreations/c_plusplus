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

    // lamda function that returns something
    std::cout << std::endl;
    auto result = [](double a, double b)
    {
        return (a + b);
    }(14.3, 20.3);

    std::cout << "Result = " << result << std::endl;

    [](int a, int b)
    {
        std::cout << "a + b = " << a + b << std::endl;
    }(14, 20);

    auto func1 = [](double a, double b)
    {
        return a + b;
    };

    auto func2 = [](double a, double b) -> int
    {
        return a + b;
    };

    std::cout << "Result of func1 : " << func1(45.3, 60.3) << std::endl;
    std::cout << "Result of func2 : " << func2(4.3, 6.3) << std::endl;
}