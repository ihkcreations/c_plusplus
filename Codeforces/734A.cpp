#include <iostream>

int main()
{

    std::string a;
    long int n;

    int countA{};
    int countD{};

    std::cin >> n;
    std::cin >> a;

    for (size_t i{}; i < n; i++)
    {

        if (a[i] == 'A')
        {
            countA++;
        }
        else if (a[i] == 'D')
        {
            countD++;
        }
    }

    if (countA > countD)
    {
        std::cout << "Anton";
    }
    else if (countA < countD)
    {
        std::cout << "Danik";
    }
    else if (countA == countD)
    {
        std::cout << "Friendship";
    }

    return 0;
}