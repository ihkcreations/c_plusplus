#include <iostream>

int main()
{

    int exitPass{};
    int enterPass{};

    int n{};
    int temp{};
    int maxPass{};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {
        std::cin >> exitPass;
        std::cin >> enterPass;
        temp += enterPass;
        temp -= exitPass;
        if (temp > maxPass)
        {
            maxPass = temp;
        }
    }

    std::cout << maxPass;

    return 0;
}