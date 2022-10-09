#include <iostream>
#include <cstring>

int main()
{

    const char *string1 = "aaabama";
    const char *string2 = "aaabamb";
    size_t n{3};

    std::cout << std::endl;
    std::cout << "std::strncmp ( " << string1 << ", " << string2 << ", "
              << n
              << " ) :"
              << std::strncmp(string1, string2, n) << std::endl;
}