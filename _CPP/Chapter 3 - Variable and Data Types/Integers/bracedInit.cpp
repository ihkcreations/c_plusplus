#include <iostream>

int main()
{
    // Variable may contain random garbage value, avoid using this method of declaration
    int elephant;

    // initializes to zero
    int lion{};

    int dog{10}; // initializes 10 dogs
    int cat{15}; // initializes 15 cats

    int domesticAnimals{dog + cat};
    int notDouble{2.9}; // will show narrowing error and won't compile

    std::cout << "Elephant: " << elephant << std::endl;
    std::cout << "Lion: " << lion << std::endl;
    std::cout << "Dog: " << dog << std::endl;
    std::cout << "Cat: " << cat << std::endl;
    std::cout << domesticAnimals << std::endl;
    std::cout << notDouble << std::endl;
}