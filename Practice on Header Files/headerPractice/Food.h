#pragma once
#include <iostream>

class Food
{
private:
    std::string foodName;

public:
    Food(std::string name);
    std::string getFoodName();
    void setFoodName(std::string newName);
};