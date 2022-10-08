#include <iostream>

int main()
{

    int value{45};
    double value2{63.38};

    int &referenceValue{value};
    double &referenceValue2{value2};

    std::cout << std::endl;
    std::cout << "int value : " << value << std::endl;
    std::cout << "double value : " << value2 << std::endl;
    std::cout << "reference int value : " << referenceValue << std::endl;
    std::cout << "reference double value : " << referenceValue2 << std::endl;

    std::cout << std::endl;
    std::cout << "&value : " << &value << std::endl;
    std::cout << "&value2 : " << &value2 << std::endl;
    std::cout << "&referenceValue : " << &referenceValue << std::endl;
    std::cout << "&referenceValue2 : " << &referenceValue2 << std::endl;

    std::cout << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&) : " << sizeof(int &) << std::endl;
    std::cout << "sizeof(referenceValue) : " << sizeof(referenceValue) << std::endl;
    std::cout << "sizeof(referenceValue2) : " << sizeof(referenceValue2) << std::endl;
}