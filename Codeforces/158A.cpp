#include <iostream>

int main()
{

    int n;
    int k;
    int scores[100];
    int sum = 0;

    std::cin >> n;
    std::cin >> k;

    for (int i{1}; i <= n; i++)
    {
        std::cin >> scores[i];
    }

    for (int i{1}; i <= n; i++)
    {

        if (scores[k] <= scores[i] && scores[i] != 0)
        {
            sum += 1;
        }
    }
    std::cout << sum;
}