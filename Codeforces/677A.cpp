#include <iostream>

int main()
{

    int n;
    int h;
    int a[2500];
    int sum{};

    std::cin >> n;
    std::cin >> h;

    for (size_t i{}; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }

    std::cout << sum;
}