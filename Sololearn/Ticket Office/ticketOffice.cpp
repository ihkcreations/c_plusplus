/*Ticket Office


You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.
*/

#include <iostream>

int main()
{

    int ageList[5];
    int ticketPrice{10};
    int members = std::size(ageList);
    int totalTicketPrice{ticketPrice * members};

    // std::cout << "Ticket price = " << totalTicketPrice << std::endl;

    for (int i{}; i < std::size(ageList); i++)
    {
        std::cin >> ageList[i];
    }

    double arraySize = ageList[members - 1];
    double minimumAge{arraySize};
    for (int i{}; i < std::size(ageList); i++)
    {

        if (ageList[i] < minimumAge)
        {
            minimumAge = ageList[i];
        }
    }

    double discount = (totalTicketPrice * (minimumAge / 100));
    // std::cout << "Discout : " << discount << std::endl;

    double finalTicketPrice = totalTicketPrice - discount;
    std::cout << finalTicketPrice << std::endl;
}