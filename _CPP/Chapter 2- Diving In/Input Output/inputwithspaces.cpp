#include <iostream>

int main()
{

    int age;
    int age2{24};
    std::string fullName;
    std::string anotherName{"Hannan Hossain Khan"};

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Type in your age: ";
    std::cin >> age;

    std::cout << "Hello " << fullName << "! Your are " << age << "years old" << std::endl;
    std::cout << "Hello " << anotherName << "! Your are " << age2 << "years old" << std::endl;
}