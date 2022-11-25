#include <iostream>

int main()
{

    int n{};
    int k[150]{};
    int sum{};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {
        std::cin >> k[i];
        sum += k[i];
    }

    std::cout << (double)sum / n;
    return 0;
}