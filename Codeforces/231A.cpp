#include <iostream>

int main()
{

    int n;

    int p;
    int v;
    int t;
    int sum = 0;

    std::cin >> n;

    for (size_t i{}; i < n; i++)
    {
        std::cin >> p;
        std::cin >> v;
        std::cin >> t;
        if (p > 0 && v > 0 && t > 0)
        {
            sum += 1;
        }
        else if (p > 0 && v > 0)
        {
            sum += 1;
        }
        else if (v > 0 && t > 0)
        {
            sum += 1;
        }
        else if (p > 0 && t > 0)
        {
            sum += 1;
        }
    }

    std::cout << sum;
}