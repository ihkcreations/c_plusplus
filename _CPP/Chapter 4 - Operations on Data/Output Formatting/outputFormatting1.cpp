#include <iostream>
#include <ios>
#include <iomanip>

int main()
{

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel"
              << " "
              << "Gray"
              << " 25" << std::endl;
    std::cout << "Stanley"
              << " "
              << "Woods"
              << " 33" << std::endl;
    std::cout << "Jordan"
              << " "
              << "Parker"
              << " 45" << std::endl;
    std::cout << "Joe"
              << " "
              << "Ball"
              << " 21" << std::endl;
    std::cout << "Josh"
              << " "
              << "Carr"
              << " 27" << std::endl;
    std::cout << "Izaiah"
              << " "
              << "Robinson"
              << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;

    std::cout << std::left;
    // std::cout << std::setfill('-');

    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
}