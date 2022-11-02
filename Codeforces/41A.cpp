#include <iostream>
#include <cstring>

int main()
{

    char s[150];
    char t[150];

    std::cin >> s;
    std::cin >> t;

    int len = std::strlen(s);
    int len2 = std::strlen(t) - 1;
    int count = 0;

    for (size_t i{}; i < len; i++)
    {

        if (s[i] == t[len2])
        {
            count++;
        }
        else
        {
            count--;
        }
        len2--;
    }

    // std::cout << count;

    if (count > 0 && count == len)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}