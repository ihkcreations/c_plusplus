#include <iostream>

int main()
{
    long int N_Arr[100000];
    long int N;
    long int k;
    long int sum = 0;

    std::cin >> N;
    std::cin >> k;

    for (size_t i{}; i < N; i++)
    {
        std::cin >> N_Arr[i];
        // sum = sum + N_Arr[i];
    }
}