#include "food.h"
#include <iostream>

Food::Food(std::string name)
{
    foodName = name;
}

std::string Food::getFoodName()
{
    return foodName;
}

void Food::setFoodName(std::string newName)
{
    foodName = newName;
}
