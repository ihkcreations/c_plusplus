// double takes 8 bytes
// int takes 4 bytes
// array takes 10bytes

#include <iostream>

int main()
{

    double numArray[10];
    std::cout << "size of array: " << sizeof(numArray) << std::endl;
    std::cout << "size of array element 0: " << sizeof(numArray[0]) << std::endl;
    std::cout << sizeof(numArray) / sizeof(numArray[0]);

    std::cout << " " << std::endl;

    int numArray1[10];
    std::cout << "size of array: " << sizeof(numArray1) << std::endl;
    std::cout << "size of array element 0: " << sizeof(numArray1[0]) << std::endl;
    std::cout << sizeof(numArray1) / sizeof(numArray1[0]);
}