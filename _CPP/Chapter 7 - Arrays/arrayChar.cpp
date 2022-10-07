#include <iostream>

int main()
{

    char message[5]{'H', 'e', 'l', 'l', 'o'};

    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "size of message array : "
              << std::size(message)
              << std::endl;

    std::cout << std::endl;
    std::cout << "Modifying array data: " << std::endl;

    message[1] = 'a';

    for (auto c : message)
    {
        std::cout << c;
    }
}