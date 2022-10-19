#include <iostream>
#include <cstring>

int main()
{

    std::string message;
    std::getline(std::cin, message);

    // std::cout << message << std::endl;

    std::string stringArr[30];
    // std::cout << "size of stringArr: " << std::size(stringArr) << std::endl;

    std::string word = "";
    int i = 0;
    for (auto x : message)
    {
        if (x == ' ')
        {
            stringArr[i] = word;
            i++;
            std::cout << word << std::endl;
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    std::cout << word << std::endl;
    stringArr[i] = word;
    std::cout << "========================" << std::endl;

    for (int j{i}; j >= 0; j--)
    {
        std::cout << stringArr[j] << " ";
    }
}
