#include <iostream>

int main()
{

    char *p_char{nullptr};
    char character{'A'};
    char message{'H'};

    p_char = &character;
    std::cout << "Value of variable 'character' : "
              << character
              << std::endl;

    std::cout << "Address of pointer char : "
              << p_char
              << std::endl;

    std::cout << "Value of pointer char : "
              << *p_char
              << std::endl;

    std::cout << std::endl;

    p_char = &message;
    std::cout << "Value of variable 'message' : "
              << message
              << std::endl;

    std::cout << "Address of pointer char now : "
              << p_char
              << std::endl;

    std::cout << "Value of pointer char now : "
              << *p_char
              << std::endl;
}