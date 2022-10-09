#include <iostream>

void enter_nightClub(int age)
{

    if (age > 18)
    {
        std::cout << "You're " << age << " years old. Please proceed.\n";
    }
    else
    {
        std::cout << "Sorry, you're too yound to proceed, please leave\n";
    }
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{

    enter_nightClub(20);
    std::cout << "Max : " << max(53, 95) << std::endl;
}