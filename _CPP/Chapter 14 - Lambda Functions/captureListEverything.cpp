#include <iostream>

int main()
{
    int c{42};
    auto func2 = [=]() // here = means everything will be captured outside of the lambda function
    {
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {

        std::cout << "Outer value : " << c << std::endl;
        func2();
        std::cout << std::endl;
        c++;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    int d{10};
    double e{20.5};
    auto func3 = [&]() // here = means everything will be captured outside of the lambda function by reference
    {
        std::cout << "Inner value : " << d << std::endl;
        std::cout << "Inner value : " << e << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {

        std::cout << "Outer value : " << d << std::endl;
        std::cout << "Outer value : " << e << std::endl;
        func3();
        std::cout << std::endl;
        d++;
        e += 0.5;
    }
}