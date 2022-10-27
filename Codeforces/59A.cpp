#include <iostream>

int main()
{

    std::string s;
    std::cin >> s;

    int len = s.length();
    int low{};
    int upp{};

    for (size_t i{}; i < len; i++)
    {
        if (islower(s[i]))
        {
            low++;
        }
        else if (isupper(s[i]))
        {
            upp++;
        }
    }

    for (size_t i{}; i < len; i++)
    {

        if (low == upp)
        {
            std::cout << (char)tolower(s[i]);
        }
        else if (low > upp)
        {
            std::cout << (char)tolower(s[i]);
        }
        else if (low < upp)
        {
            std::cout << (char)toupper(s[i]);
        }
    }

    return 0;
}