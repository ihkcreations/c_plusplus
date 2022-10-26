#include <iostream>

int main()
{

    long int k{};
    long int n{};
    long int w{};

    std::cin >> k;
    std::cin >> n;
    std::cin >> w;

    long int totalCost{};

    for (size_t i{1}; i <= w; i++)
    {
        totalCost += k * i;
    }

    long int borrow = totalCost - n;
    if (borrow <= 0)
    {
        borrow = 0;
    }
    std::cout << borrow;
}