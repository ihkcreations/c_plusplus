#include <iostream>

int main()
{

    int l;
    int b;

    int years = 0;

    std::cin >> l;
    std::cin >> b;

    while (b >= l)
    {

        if (b >= l)
        {
            l = l * 3;
            b = b * 2;
            years += 1;
        }
    }

    std::cout << years;
}