#include <iostream>
#include <cstring>

int main()
{

    const char *string1{"Alabama"};
    const char *string2{"Alabama"};

    std::cout << "std::strcmp ( " << string1 << ", " << string2 << " ) :"
              << std::strcmp(string1, string2) << std::endl;

    string1 = "Alabama";
    string2 = "Alabamb";

    std::cout << std::endl;
    std::cout << "std::strcmp ( " << string1 << ", " << string2 << " ) :"
              << std::strcmp(string1, string2) << std::endl;

    string1 = "aaabama";
    string2 = "aaabamb";
    size_t n{3};

    std::cout << std::endl;
    std::cout << "std::strncmp ( " << string1 << ", " << string2 << ", "
              << n
              << " ) :"
              << std::strncmp(string1, string2, n) << std::endl;
}