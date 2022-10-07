#include <iostream>

int main()
{

    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout << "a :" << a << std::endl;
    std::cout << "c :" << b << std::endl;
    std::cout << "b :" << c << std::endl;

    std::cout << std::endl;
    std::cout << "Basic AND Operations" << std::endl;
    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << "a && b && c : " << (a && b && c) << std::endl;
}