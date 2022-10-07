#include <iostream>

int main()
{

    int scores[10];
    int sum{};

    for (size_t i{}; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    for (int element : scores)
    {
        std::cout << element << std::endl;
        sum += element;
    }

    std::cout << "Score sum : " << sum << std::endl;
}