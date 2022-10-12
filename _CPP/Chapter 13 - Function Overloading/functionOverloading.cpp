#include <iostream>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}

std::string max(std::string a, std::string b)
{
    return (a > b) ? a : b;
}

int main()
{
    int integer1{12};
    int integer2{21};

    double doubleValue1{32.12};
    double doubleValue2{85.69};

    std::string first{"Apple"};
    std::string second{"Ball"};

    std::cout << "max(integer1, integer2) : " << max(integer1, integer2) << std::endl;
    std::cout << "max(doubleValue1, doubleValue2) : " << max(doubleValue1, doubleValue2) << std::endl;
    std::cout << "max(first, second) : " << max(first, second) << std::endl;
}