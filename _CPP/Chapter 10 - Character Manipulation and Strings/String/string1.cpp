#include <iostream>

int main()
{

    std::string fullName;
    std::string planet{"Earth. Where the sky is blue"};
    std::string preferred_planet{planet};
    std::string message{"Hello there", 5}; // 5 means will take upto hello

    std::string duplicateCharacters(4, 'e');

    std::string greeting{"Hello world"};
    std::string sayingHello{greeting, 6, 5}; // starting from index 6, we take 5 chars.

    std::cout << "fullname: " << fullName << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "preferred_planet: " << preferred_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "duplicate characters: " << duplicateCharacters << std::endl;
    std::cout << "fullname: " << fullName << std::endl;
    std::cout << "fullname: " << fullName << std::endl;
}