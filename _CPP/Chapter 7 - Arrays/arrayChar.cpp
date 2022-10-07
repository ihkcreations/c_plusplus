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

    // need to mention the \0 in the array to omit
    // garbage value
    std::cout << std::endl;
    char message2[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message2 : " << message2 << std::endl;

    // need to mention the size of the array to 6 for omiting
    // garbage value
    std::cout << std::endl;
    char message3[6]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message3 : " << message3 << std::endl;
}