#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int stonesToTake = 0;

    for (size_t i{}; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            stonesToTake++;
        }
    }

    std::cout << stonesToTake;
}