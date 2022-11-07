#include <iostream>

int main()
{

    int n{};
    int r[120];
    int sum{};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {

        std::cin >> r[i];
        sum += r[i];
        if (sum > 0)
        {
            break;
        }
    }

    if (sum > 0)
    {
        std::cout << "HARD";
    }
    else
    {
        std::cout << "EASY";
    }

    return 0;
}