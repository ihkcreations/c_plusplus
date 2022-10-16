#include <iostream>

int main()
{

    std::string message{"This is me mario"};
    int messageLen = std::size(message);

    char copyMessage[messageLen + 1];

    /*
    std::cout << "Copying message string to char array " << std::endl;
    for (size_t i{}; i <= messageLen; i++)
    {
        copyMessage[i] = message[i];
    }

    std::cout << "char array message : " << copyMessage << std::endl;
    */
}