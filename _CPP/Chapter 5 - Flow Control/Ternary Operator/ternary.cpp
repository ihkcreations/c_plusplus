#include <iostream>

int main()
{

    int max{};

    int a{55};
    int b{20};

    max = (a > b) ? a : b;
    std::cout << "Max value is : " << max << std::endl;

    std::cout << std::endl;
    std::cout << "Speed" << std::endl;
    bool fast = false;

    int speed{fast ? 300 : 150};
    std::cout << "The speed is : " << speed << std::endl;
}