#include <iostream>

int main()
{

    std::cout << "----< std::isblank >----" << std::endl;
    char message[]{"Hello there, How are you doing? The sun is not shining yet."};
    std::cout << message << std::endl;

    std::cout << std::endl;
    // find and print blank index
    int blank_count{};
    for (size_t i{}; i < std::size(message); i++)
    {

        if (std::isblank(message[i]))
        {
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }

    std::cout << "In total we found " << blank_count << " blank characters." << std::endl;
}