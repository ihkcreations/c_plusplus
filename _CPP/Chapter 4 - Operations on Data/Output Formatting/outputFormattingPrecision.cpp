#include <iostream>
#include <ios>
#include <iomanip>

int main()
{

    double a{3.1415926535897932384626433832795};

    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
}