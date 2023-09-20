#include <iostream>
#include "person.h"

int main()
{
    Person p1{"Iftekhar", "25", "ihk@mail.com"};
    std::cout << p1.toString() << std::endl;

    std::cout << std::endl;
    std::cout << "Add your own info down below" << std::endl;

    std::string name;
    std::string age;
    std::string email;

    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Age: ";
    std::cin >> age;
    std::cout << "Email: ";
    std::cin >> email;

    Person p2{name, age, email};
    std::cout << p2.toString() << std::endl;
}