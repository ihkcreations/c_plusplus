#include <iostream>

int main()
{

    std::cout << "std::isdigit" << std::endl;
    char original[]{"Mr Hafiz owns 4726 cars. That's a lot of cars!"};
    char changedMessage[std::size(original)];

    for (size_t i{}; i < std::size(original); ++i)
    {
        changedMessage[i] = std::toupper(original[i]);
    }

    std::cout << "Original message: " << original << std::endl;
    std::cout << "Touppercase message: " << changedMessage << std::endl;
    std::cout << std::endl;

    for (size_t i{}; i < std::size(original); ++i)
    {
        changedMessage[i] = std::tolower(original[i]);
    }

    std::cout << "Original message: " << original << std::endl;
    std::cout << "Touppercase message: " << changedMessage << std::endl;
    std::cout << std::endl;
}