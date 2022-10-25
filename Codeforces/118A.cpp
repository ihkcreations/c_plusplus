#include <iostream>
#include <cstring>

int main()
{

    std::string s;
    std::cin >> s;
    long int len = s.length();

    for (size_t i{}; i < len; i++)
    {

        if (tolower(s.at(i)) == 'a')
        {
            std::cout << "";
        }
        else if (tolower(s.at(i)) == 'e')
        {
            std::cout << "";
        }
        else if (tolower(s.at(i)) == 'i')
        {
            std::cout << "";
        }
        else if (tolower(s.at(i)) == 'o')
        {
            std::cout << "";
        }
        else if (tolower(s.at(i)) == 'u')
        {
            std::cout << "";
        }
        else if (tolower(s.at(i)) == 'y')
        {
            std::cout << "";
        }
        else
        {
            std::cout << ".";
            std::cout << char(tolower(s.at(i)));
        }
    }

    return 0;
}