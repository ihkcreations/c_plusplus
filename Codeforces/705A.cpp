#include <iostream>

int main()
{

    std::string msg1 = "I hate it";
    std::string msg2 = "I hate that ";
    std::string msg3 = "I love it ";
    std::string msg4 = "I love that ";

    int n{};

    std::cin >> n;
    if (n==1)
    {
        std::cout << msg1;
    }
    else if (n > 1)
    {
        std::cout << msg2;
    }

    for (int i = 2; i <= n; i++)
    {

        if (i % 2 == 1 && i != n)
        {
            std::cout << msg2;
        }
        else if (i % 2 == 0 && i != n)
        {
            std::cout << msg4;
        }
    }

    if (n % 2 == 0 && n > 1)
    {
        std::cout << msg3;
    }
    else if (n > 1)
    {
        std::cout << msg1;
    }
    std::cout << std::endl;
    return 0;
}