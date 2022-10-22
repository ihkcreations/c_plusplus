#include <iostream>

int main()
{

    long long int n, m, a;

    std::cin >> n;
    std::cin >> m;
    std::cin >> a;

    int r = n / a;
    if (n % a != 0)
    {
        r++;
    }

    int f = m / a;
    if (m % a != 0)
    {
        f++;
    }

    std::cout << (long long)r * f;
    return 0;
}