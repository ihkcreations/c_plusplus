// Way Too Long Words//

#include <iostream>

int main()
{
    std::string arr[100];
    int n;
    int removeFirstLastChars{2};

    std::cin >> n;
    for (size_t i{}; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (size_t i{}; i < n; i++)
    {

        if (arr[i].length() > 10)
        {
            std::cout << arr[i].front() << arr[i].length() - removeFirstLastChars << arr[i].back() << std::endl;
        }
        else
        {
            std::cout << arr[i] << std::endl;
        }
    }

    return 0;
}