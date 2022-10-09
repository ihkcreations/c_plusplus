#include <iostream>
#include <cstring>

int main()
{

    const char message[]{"The sky is green"};
    const char *message2{"The sky is blue"};

    std::cout << "message1: " << message << std::endl;
    std::cout << "strlen(message1) : " << std::strlen(message) << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message) << std::endl;
    std::cout << std::endl;

    std::cout << "message2: " << message2 << std::endl;
    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
    std::cout << "sizeof(char *) : " << sizeof(char *) << std::endl;
}