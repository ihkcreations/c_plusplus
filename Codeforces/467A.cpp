#include <iostream>

int main()
{

    int p{};
    int q{};
    int n{};

    bool canStay{false};
    int count{};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {

        std::cin >> p;
        std::cin >> q;
        if (p == q || (q - p) == 1)
        {
            canStay = false;
        }
        else
        {

            canStay = true;
            count++;
        }
    }

    if (canStay == true)
    {
        std::cout << count;
    }
    else
    {
        std::cout << count;
    }

    return 0;
}