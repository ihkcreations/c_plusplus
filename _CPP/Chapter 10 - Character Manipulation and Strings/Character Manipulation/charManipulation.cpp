#include <iostream>
#include <cctype>

int main()
{

    std::cout << "----< std::isalnum >----" << std::endl;

    // if it returns 0 then it means false otherwise true
    std::cout << "C is alphanumeric : "
              << std::isalnum('C') << std::endl; // returns 1

    std::cout << "^ is alphanumeric : "
              << std::isalnum('^') << std::endl; // returns 0

    std::cout << std::endl;
    char inputChar{'*'};
    if (std::isalnum(inputChar))
    {
        std::cout << "Given character is alphanumeric" << std::endl;
    }
    else
    {
        std::cout << "Given character is not alphanumeric" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----< std::isalpha >----" << std::endl;

    // if it returns 0 then it means false otherwise true
    std::cout << "C is alphabetic : "
              << std::isalnum('C') << std::endl; // returns 1

    std::cout << "^ is alphabetic : "
              << std::isalnum('^') << std::endl; // returns 0

    std::cout << std::endl;
    char inputChar2{'*'};
    if (std::isalpha(inputChar2))
    {
        std::cout << "Given character is alphabetic" << std::endl;
    }
    else
    {
        std::cout << "Given character is not alphabetic" << std::endl;
    }
}