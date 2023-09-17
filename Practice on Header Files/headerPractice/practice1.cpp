#include <iostream>
#include "Food.h"

int main()
{
    Food food1{"Burger"};
    std::cout << "Current Food Name : " << food1.getFoodName() << std::endl;

    food1.setFoodName("Pizza");
    std::cout << "New Food Name     : " << food1.getFoodName() << std::endl;

    return 0;
}