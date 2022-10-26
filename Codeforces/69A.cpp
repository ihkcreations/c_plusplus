#include <iostream>

int main()
{
    int x;
    int y;
    int z;

    int n;
    std::cin >> n;
    int sumX{};
    int sumY{};
    int sumZ{};

    for (size_t i{}; i < n; i++)
    {
        std::cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}