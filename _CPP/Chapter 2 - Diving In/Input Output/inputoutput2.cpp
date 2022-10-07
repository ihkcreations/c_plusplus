#include <iostream>

int main()
{

    int age;
    std::string name;

    std::cout << "Please type in your last name and age, separated by spaces: " << std::endl;
    std::cin >> name >> age; // Taking last name first then taking the age value

    std::cout << "Hello " << name << " ! You are " << age << " years old." << std::endl;

    return 0;
}