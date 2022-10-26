#include <iostream>

int main()
{

    long int steps{};

    long int x;
    std::cin >> x;

    if (x <= 5)
    {
        steps = 1;
        std::cout << steps;
    }
    else
    {
        steps = x / 5;
        if (x % 5 > 0)
        {
            steps++;
        }

        std::cout << steps;
    }

    return 0;
}