#include <iostream>

int main()
{

    double a{20};
    double b{30};

    auto func = [a, b]()
    {
        std::cout << "a + b = " << a + b << std::endl;
    };

    func();

    //----------------------------------------------------------//

    int c{42};
    auto func2 = [c]()
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