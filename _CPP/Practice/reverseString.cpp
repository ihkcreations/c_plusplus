#include <iostream>

int main()
{

    std::string message = "This is me Mario";
    int messageLength = std::size(message);

    std::cout << "Length of the message : " << messageLength << std::endl;
    std::cout << "message[15] : " << message[messageLength - 1] << std::endl;

    std::cout << std::endl;
    std::cout << "Printing the message in reverse order: " << std::endl;

    for (int i{messageLength}; i >= 0; i--)
    {

        std::cout << message[i];
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Converting string to char " << std::endl;
    int j = 0;
    char mess[messageLength + 1];
    for (int i{}; i <= messageLength; i++)
    {

        mess[j] = message[i];
        j++;
    }

    std::cout << mess << std::endl;

    std::cout << "Printing the message in reverse order again: " << std::endl;
    for (int i{messageLength}; i >= 0; i--)
    {

        std::cout << mess[i];
    }
}