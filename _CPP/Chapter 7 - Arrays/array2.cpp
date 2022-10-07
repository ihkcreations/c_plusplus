#include <iostream>

int main()
{

    double salaries[5]{12.5, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{}; i < 5; i++)
    {
        std::cout << "Salaries : " << salaries[i] << std::endl;
    }
}