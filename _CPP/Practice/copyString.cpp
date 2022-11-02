#include <iostream>
#include <cstring>

int main()
{

    char a[10];
    std::string s;
    std::cin >> s;

    int i{};

    for (i; i < s.length(); i++)
    {
        a[i] = s[i];
    }
    a[i] = '\0';
    // a[0] = s[0];
    std::cout << a;
}