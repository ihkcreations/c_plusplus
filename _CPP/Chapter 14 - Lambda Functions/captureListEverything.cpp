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
}