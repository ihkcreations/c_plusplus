#include <iostream>

void sayAge(int age);

int main()
{

    int age{15};
    std::cout << "You are " << age << " years old now" << std::endl;
    sayAge(age);
    std::cout << "But you are still " << age << " years old" << std::endl;
}

void sayAge(int age)
{
    ++age;
    std::cout << "You will be " << age << " years old!" << std::endl;
}
