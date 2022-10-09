#include <iostream>
#include <cstring>

int main()
{

    const char *string1{"Iftekhar "};
    char *copiedString = new char[std::strlen(string1) + 1];

    std::strcpy(copiedString, string1);

    std::cout << "std::strlen(string1) : " << std::strlen(string1) << std::endl;
    std::cout << "Copied string is : " << copiedString << std::endl;
}