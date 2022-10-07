#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int numberPassengers = 50;
    int passengersWaiting;
    int lastBus, freeSeats;

    cin >> passengersWaiting;

    lastBus = passengersWaiting % numberPassengers;
    freeSeats = numberPassengers - lastBus;

    cout<< freeSeats;

    return 0;
}
