#include <iostream>

int main()
{

    std::cout << "std::isdigit" << std::endl;
    char thought[]{"Mr Hafiz owns 4726 cars. That's a lot of cars!"};
    int digit_count{};

    std::cout << "Original Message : " << thought << std::endl;

    for (auto character : thought)
    {

        if (std::isdigit(character))
        {
            std::cout << "Found digit : " << character << std::endl;
            ++digit_count;
        }
    }

    std::cout << std::endl;
    std::cout << "Found " << digit_count << " digits in the statement string " << std::endl;
}