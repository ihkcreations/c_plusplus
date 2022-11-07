#include <iostream>
#include <algorithm>

int main()
{

    int A[1000];
    int solutionTable[300][300];
    int noOfCoins{};
    int amountToMake{};

    std::cin >> noOfCoins;
    std::cin >> amountToMake;

    for (size_t i{}; i < noOfCoins; i++)
    {
        std::cin >> A[i];
    }

    // for (size_t i{}; i < noOfCoins; i++)
    // {
    //     std::cout << A[i] << " ";
    // }

    int i{};
    int j{};
    for (i; i < noOfCoins; i++)
    {

        for (j; j <= amountToMake; j++)
        {

            if (A[i] > j)
            {
                solutionTable[i][j] = solutionTable[i - 1][j];
            }
            else
            {
                solutionTable[i][j] = std::min(solutionTable[i - 1][j], (1 + solutionTable[i][j - A[i]]));
            }
        }
    }

    std::cout << solutionTable[i][j];
}