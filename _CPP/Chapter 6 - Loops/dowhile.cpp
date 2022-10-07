#include <iostream>

int main()
{

    const unsigned int COUNT{10};
    unsigned int i{};

    do
    {
        std::cout << "[" << i << "] : I Love C++" << std::endl;
        i++;
    } while (i < COUNT);
}