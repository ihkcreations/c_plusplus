#include <iostream>

int main()
{

    int age;
    std::string fullName;

    std::cout << "Type in your full name and age" << std::endl;
    std::getline(std::cin, fullName) >> age;

    std::cout << "Hello " << fullName << "! You are " << age << " years old" << std::endl;
}