#include <iostream>

int main()
{
    // Variable may contain random garbage value, avoid using this method of declaration
    int elephant;

    // initializes to zero
    int lion = 0;

    int dog = 10; // initializes 10 dogs
    int cat = 15; // initializes 15 cats

    int domesticAnimals = dog + cat;
    int notDouble = 2.9; // will not show error but will narrow it down to 2

    std::cout << "Elephant: " << elephant << std::endl;
    std::cout << "Lion: " << lion << std::endl;
    std::cout << "Dog: " << dog << std::endl;
    std::cout << "Cat: " << cat << std::endl;
    std::cout << "Domestic Animals: " << domesticAnimals << std::endl;
    std::cout << notDouble << std::endl;
}