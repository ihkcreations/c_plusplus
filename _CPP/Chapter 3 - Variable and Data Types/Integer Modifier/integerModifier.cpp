#include <iostream>

int main()
{
    signed int num1{10};
    signed int num2{-10};

    std::cout << "Num1: " << num1 << std::endl;
    std::cout << "Num2: " << num2 << std::endl;

    unsigned int num3{45};
    // unsigned int num4{-55}; // cannot compile as the value is negative

    std::cout << "Num3: " << num3 << std::endl;
    // std::cout << "Num4: " << num4 << std::endl;

    short short_var{-32768};
    short int short_int_var{4556};

    std::cout << "Short var: " << short_var << std::endl;
    std::cout << "Short int var: " << short_int_var << std::endl;
    std::cout << "size of short_var: " << sizeof(short_var) << std::endl;
    std::cout << "size of short_int_var: " << sizeof(short_int_var) << std::endl;
}