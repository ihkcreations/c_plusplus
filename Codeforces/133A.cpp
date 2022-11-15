#include <iostream>

int main()
{

    char h{'H'};
    char q{'Q'};
    char n{'9'};
    char plus{'+'};

    std::string s{};
    std::cin >> s;

    bool possible = false;

    for (size_t i{}; i < s.length(); i++)
    {

        if (s.at(i) == h || s.at(i) == q || s.at(i) == n)
        {
            possible = true;
        }
    }

    if (possible)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}