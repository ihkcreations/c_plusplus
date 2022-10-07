#include <iostream>

int main()
{

    char message[]{"Hello"};
    std::cout << "Message : " << message << std::endl;
    std::cout << "Size of message array : "
              << std::size(message)
              << std::endl;
    // here the size of the array will be six as the null '\0'
    // is being added automatically by compiler

    std::cout << std::endl;
    char message2[]{"Hello World!"};
    std::cout << "Message 2 : " << message2 << std::endl;
    std::cout << "Size of message 2 array : "
              << std::size(message2)
              << std::endl;
}