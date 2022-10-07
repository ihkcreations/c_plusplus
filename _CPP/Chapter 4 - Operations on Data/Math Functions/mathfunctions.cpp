#include <iostream>
#include <cmath>

int main()
{
    double weight{8.5};

    std::cout << "Weight rounded to floor is : "
              << std::floor(weight) << std::endl;

    std::cout << "Weight rounded to ceil is : "
              << std::ceil(weight) << std::endl;

    //-------------------------------------------------//
    std::cout << std::endl;
    double savings{-5000};
    weight = 7.7;

    std::cout << "Absolute value of weight : " << std::abs(weight) << std::endl;
    std::cout << "Absolute value of savings : " << std::abs(savings) << std::endl;

    //-------------------------------------------------------//

    std::cout << std::endl;
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 : " << exponential << std::endl;

    //================================================================//

    std::cout << std::endl;
    std::cout << "3 ^ 4 : " << std::pow(3, 4) << std::endl;
    std::cout << "9 ^ 3 : " << std::pow(9, 3) << std::endl;
}