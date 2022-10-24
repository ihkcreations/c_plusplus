#include <iostream>
#include <cstring>

int main()
{

    char str1[150];
    char str2[150];

    std::cin >> str1;
    std::cin >> str2;

    unsigned int str1len = std::strlen(str1);
    // unsigned int str2len = std::strlen(str2);

    for (size_t i{}; i < str1len; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    int output = strcmp(str1, str2);

    std::cout << output;

    return 0;
}