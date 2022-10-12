/*Ticket Office


You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.
*/

#include <iostream>

int main()
{

    int age[5];

    for (int i{}; i < std::size(age); i++)
    {
        std::cin >> age[i];
    }

    int minimumAge{std::size(age)};
    for (int i{}; i < std::size(age); i++)
    {

        if (age[i] < minimumAge)
        {
            minimumAge = age[i];
        }
    }
}