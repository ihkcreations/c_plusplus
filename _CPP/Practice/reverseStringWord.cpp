#include <iostream>

int main()
{

    std::string message;

    std::cout << "Enter message : " << std::endl;
    std::cin >> message;

    std::cout << std::endl;
    std::cout << message << std::endl;

    int messageLength = std::size(message);

    // for ()
}