#include <iostream>

void printOrder(std::string a = "Black Tea")
{
    std::cout << a << "\n";
}

int main()
{
    std::string foodOrder{};
    std::cin >> foodOrder;

    printOrder();
    printOrder(foodOrder);

    return 0;
}