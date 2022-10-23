#include <iostream>

int main()
{

    int n;
    int x = 0;
    std::string input[150];

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {
        std::cin >> input[i];
    }

    for (size_t i{}; i < n; i++)
    {
        if (input[i] == "X++" || input[i] == "++X")
        {
            x = x + 1;
        }
        else if (input[i] == "X--" || input[i] == "--X")
        {
            x = x - 1;
        }
    }

    std::cout << x;

    return 0;
}