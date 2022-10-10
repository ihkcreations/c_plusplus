#include <iostream>

void sayAge(int &age);

int main()
{

    int age{36};
    std::cout << "You are " << age << " years old now" << std::endl;
    sayAge(age);
    std::cout << "So you are turning to " << age << " years old" << std::endl;
}

void sayAge(int &age)
{
    ++age;
    std::cout << "You will be " << age << " years old!" << std::endl;
}
