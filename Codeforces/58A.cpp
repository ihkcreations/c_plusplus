#include <iostream>
#include <cstring>

int main()
{

    std::string s;
    std::string a = "hello";

    std::cin >> s;

    // int j{};
    int count{};
    for (int i{}; i < s.length(); i++)
    {
        if (s[i] == a[count])
        {
            count++;
            if (count == 5)
            {
                break;
            }
        }
    }

    if (count == 5)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}