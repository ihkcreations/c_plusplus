#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    s[0] = toupper(s.at(0));

    std::cout << s;

    return 0;
}