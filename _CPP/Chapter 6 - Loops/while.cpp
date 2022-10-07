#include <iostream>

int main()
{

    const unsigned int COUNT{10};
    unsigned int i{};

    while (i < COUNT)
    {
        std::cout << i << " : I Love C++" << std::endl;
        i++;
    }
}