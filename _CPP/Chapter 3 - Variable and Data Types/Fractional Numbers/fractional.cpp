#include <iostream>
#include <iomanip>

int main()
{

    // float can contains 7 digits  --> 4bytes
    // double can contains 15 digits --> 8bytes
    // long double can contain 15+ digits --> 16bytes

    float number1{1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.1234567890123456789L};

    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    std::cout << "" << std::endl;

    std::cout << std::setprecision(20);                   // standard library function of <iomanip>
    std::cout << "Float: " << number1 << std::endl;       // precision 7
    std::cout << "Double: " << number2 << std::endl;      // precision 15
    std::cout << "Long Double: " << number3 << std::endl; // precision 15+

    // declaring floating var wrong way
    // float number4{192400023.0f}; //will not show the whole value

    // we can fix this by writing it with double
    // double number4{192400023.0};
    std::cout << "" << std::endl;

    //----scientific notation-----//
    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8};

    double number8{0.00000000003498};
    double number9{3.498e-11};

    std::cout << "number 5: " << number5 << std::endl;
    std::cout << "number 6: " << number6 << std::endl;
    std::cout << "number 7: " << number7 << std::endl;
    std::cout << "number 8: " << number8 << std::endl;
    std::cout << "number 9: " << number9 << std::endl;
}