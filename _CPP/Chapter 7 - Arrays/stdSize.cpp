#include <iostream>

int main()
{

    int score[]{15, 19, 24, 53, 18, 23, 75};
    std::cout << "Score Array size : " << std::size(score) << std::endl;

    // printing data using the std::size function

    for (size_t i{}; i < std::size(score); i++)
    {
        std::cout << "Score [" << i << "] : " << score[i] << std::endl;
    }
}