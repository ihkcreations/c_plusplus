#include <iostream>

int main()
{

    long long int n{};
    long long int k{};
    long int arr[5000]{};

    std::cin >> n;
    std::cin >> k;
    int j{};

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[j] = i;
            j++;
        }
    }

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            arr[j] = i;
            j++;
        }
    }

    std::cout << arr[k - 1];

    return 0;
}