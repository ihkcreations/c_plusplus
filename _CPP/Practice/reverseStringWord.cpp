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

    std::cout << std::endl;
    std::cout << std::endl;

    std::string words;
    std::string substring;

    // std::string stringArr[]{"Ball", "Apple", "Orange"};
    // for (int i{}; i < std::size(stringArr); i++)
    // {
    //     std::cout << stringArr[i] << " ";
    // }

    int spacePos = 0;
    int wordCount = 0;

    for (int i{}; i < messageLength; i++)
    {

        if (message[i] == ' ')
        {
            spacePos = i;
        }

        if (message[i] != ' ')
        {
            wordCount++;
        }

        // for (int j{}; j < messageLength; j++)
        // {

        // }
    }

    int i = 0;
    while (i < messageLength)
    {

        if (message[i] == ' ')
        {
            spacePos = i;
        }
    }

    // std::cout << spacePos << std::endl;
    //  std::cout << wordCount << std::endl;

    // std::cout << message.substr(spacePos + 1);
}