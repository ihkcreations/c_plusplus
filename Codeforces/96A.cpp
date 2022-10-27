#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int len = s.length();

    int count{1};

    // std::cout << len;
    for (size_t i{}; i < len; i++)
    {

        if (s[i] == s[i + 1])
        {
            count++;
            if (count >= 7)
            {
                std::cout << "YES";
                break;
            }
        }
        else
        {
            count = 1;
        }
    }

    if (count < 7)
    {
        std::cout << "NO";
    }

    return 0;
}