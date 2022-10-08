#include <iostream>

int main()
{

    std::cout << "std::islower and std::isupper" << std::endl;
    char thought[]{"The C++ Programming Language is one the most used on the Planet"};
    int lower_count{};
    int upper_count{};

    std::cout << "Original Message : " << thought << std::endl;

    for (auto character : thought)
    {

        if (std::islower(character))
        {
            std::cout << " " << character;
            ++lower_count;
        }
        if (std::isupper(character))
        {
            std::cout << " " << character;
            ++upper_count;
        }
    }

    std::cout << std::endl;
    std::cout << "Found " << lower_count << " lowercase characters and "
              << upper_count << " uppercase characters " << std::endl;
}