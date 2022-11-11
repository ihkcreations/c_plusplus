#include <iostream>

int main()
{

    int n{};
    int arr1[110]{};
    int arr2[110]{};
    std::cin >> n;

    for (int i{}; i < n; i++)
    {

        std::cin >> arr1[i];
        arr2[arr1[i]] = i + 1;
    }

    for (size_t i{1}; i <= n; i++)
    {

        std::cout << arr2[i] << " ";
    }
}