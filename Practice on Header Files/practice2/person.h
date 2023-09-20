#pragma once
#include <iostream>

class Person
{
private:
    std::string personName;
    std::string personAge;
    std::string personEmail;

public:
    Person(std::string name, std::string age, std::string email);
    std::string toString();
};