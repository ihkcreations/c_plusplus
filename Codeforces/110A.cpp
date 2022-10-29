#include <iostream>

int main()
{

    long long int n{};
    long long int count{};
    std::cin >> n;

    for (size_t i{}; i < n; i++)
    {

        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }

    if (count >= 4 || count >= 7)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}