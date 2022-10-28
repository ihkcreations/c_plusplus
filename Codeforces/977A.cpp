#include <iostream>

int main()
{

    long int n{};
    int k{};

    std::cin >> n;
    std::cin >> k;

    for (size_t i{}; i < k; i++)
    {

        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }

    std::cout << n;
}