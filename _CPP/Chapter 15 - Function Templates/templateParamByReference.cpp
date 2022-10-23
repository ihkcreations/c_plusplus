#include <iostream>

template <typename T>
const T &maximum(const T &a, const T &b);

int main()
{
    double a{12.3};
    double b{17.3};

    std::cout << "Out - &a  : " << &a << std::endl;
    auto max1 = maximum(a, b);
    std::cout << "max1 : " << max1 << std::endl;

    return 0;
}

template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a   : " << &a << std::endl;
    return (a > b) ? a : b;
}