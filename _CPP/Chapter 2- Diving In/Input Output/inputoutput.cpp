#include <iostream>

int main()
{
    // std::cout --> to print data into the console
    // std::cin --> to read data from the console
    // std::cerr --> printing errors to the console
    // std::clog --> printing log messages to the console

    int age;
    std::string name;

    std::cout << "Please type in your last name: " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << " ! You are " << age << " years old" << std::endl;

    return 0;
}