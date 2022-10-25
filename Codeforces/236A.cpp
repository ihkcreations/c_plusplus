#include <iostream>
#include <algorithm>

int main()
{

    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());

    long int len = s.length();
    long int count = 0;

    for (size_t i{}; i < len; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        std::cout << "CHAT WITH HER!";
    }
    else
    {
        std::cout << "IGNORE HIM!";
    }

    return 0;
}