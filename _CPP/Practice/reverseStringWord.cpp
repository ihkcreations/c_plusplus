#include <iostream>

int main()
{

    std::string message;

    std::cout << "Enter message : ";
    std::getline(std::cin, message);

    std::cout << std::endl;
    std::cout << message << std::endl;

    int messageLength = std::size(message);
    std::cout << "length : " << messageLength << std::endl;

    for (int i{messageLength}; i >= 0; i--)
    {

        std::cout << message[i];
    }
}