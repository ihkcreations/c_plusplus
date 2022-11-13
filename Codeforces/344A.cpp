#include <iostream>
#define SIZE 100000

int main()
{

    int n{};
    int arr[SIZE];
    int value{};
    int g{};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (size_t i{}; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            g++;
        }
    }

    std::cout << g;
}