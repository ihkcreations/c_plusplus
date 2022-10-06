#include <iostream>

int main()
{

    bool redLight{true};
    bool greenLight{false};

    if (redLight == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through!" << std::endl;
    }

    if (greenLight)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is not green!" << std::endl;
    }

    //-----------------------------------------//

    std::cout << std::endl;
    std::cout << "redLight: " << redLight << std::endl;
    std::cout << "greenLight: " << greenLight << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "redLight: " << redLight << std::endl;
    std::cout << "greenLight: " << greenLight << std::endl;
}