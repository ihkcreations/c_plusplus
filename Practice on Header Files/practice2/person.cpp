#include "person.h"
#include <iostream>

Person::Person(std::string name, std::string age, std::string email)
{
    personName = name;
    personAge = age;
    personEmail = email;
}

std::string Person::toString()
{
    return "Name     : " + personName + "\n" + "Age      : " + personAge + "\n" + "Email    : " + personEmail + "\n";
}