#include <iostream>

template <typename T>
T maximum(T a, T b);

int main()
{

    int a{10};
    int b{32};

    double c{35.2};
    double d{85.65};

    std::string e{"apple"};
    std::string f{"banana"};

    maximum(a, b); // int type deduced
    maximum(c, d); // double type deduced
    maximum(e, f); // string type deduced

    maximum<double>(c, d); // explicitly calling the type
    maximum<double>(a, c); // explicitly calling the type even the variable type are not same
    // maximum<double>(a, e); // will show error as string cannot be converted to double

    std::cout << "max(int)      : " << maximum(a, b) << std::endl;
    std::cout << "max(double)   : " << maximum(c, d) << std::endl;
    std::cout << "max(string)   : " << maximum(e, f) << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}