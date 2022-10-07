#include <iostream>

int main()
{

    int scores[10];

    std::cout << std::endl;
    std::cout << "Writing data in array with loop : " << std::endl;

    for (size_t i{}; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    // Reading data's in the array using for loop
    for (size_t i{}; i < 10; i++)
    {
        std::cout << "Score [" << i << "] : "
                  << scores[i]
                  << std::endl;
    }
}