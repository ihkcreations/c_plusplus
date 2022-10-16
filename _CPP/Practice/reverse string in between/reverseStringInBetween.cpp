#include <iostream>

int main()
{

    std::string message;

    int l{};
    int r{};

    /*
    std::cout << "Copying message string to char array " << std::endl;
    for (size_t i{}; i <= messageLen; i++)
    {
        copyMessage[i] = message[i];
    }

    std::cout << "char array message : " << copyMessage << std::endl;
    */
    // iftekhar
    std::cin >> l;
    std::cin >> r;
    std::cin >> message;

    int newL = l - 1;
    int newR = r - 1;
    int messageLen = std::size(message);

    std::cout << message[newL]
              << " "
              << message[newR] << std::endl;
    std::cout << std::endl;

    char temp;
    for (int i = newR; i >= newL; i--)
    {
        temp = message[i];
        message[i] = message[newL];
        message[newL] = temp;
        newL++;
    }

    std::cout << message << std::endl;
}