#include <iostream>
#include <cstring>

int main()
{

    std::string message;
    std::getline(std::cin, message);

    // std::cout << message << std::endl;

    std::string stringArr[30];
    // std::cout << "size of stringArr: " << std::size(stringArr) << std::endl;

    int i = 0;
    int j = 0;
    std::string substring;
    std::string result;
    while (i < message.length())
    {

        while (i < message.length() && message[i] == ' ')
        {
            i++;
        }

        j = i + 1;
        while (j < message.length() && message[j] != ' ')
        {
            j++;
        }
        substring = message.substr(i, j);
        if (substring.length() == 0)
        {
            result = substring;
        }
        else
        {
            result = substring + " " + result;
        }
        i = j + 1;
    }

    std::cout << result << std::endl;

    // std::cout << "========================" << std::endl;
    // for (int j{i}; j >= 0; j--)
    // {
    //     std::cout << stringArr[j] << " ";
    // }
}
