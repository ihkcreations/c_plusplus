#include <iostream>

int main()
{
    int pen{10};
    int marker{20};
    int eraser{30};
    int rectangle{40};
    int circle{50};
    int ellipse{60};

    int tool{ellipse};

    if (tool == pen)
    {
        std::cout << "Activated pen" << std::endl;
    }
    else if (tool == marker)
    {
        std::cout << "Activated marker " << std::endl;
    }
    else if (tool == eraser)
    {
        std::cout << "Activated eraser " << std::endl;
    }
    else if (tool == rectangle)
    {
        std::cout << "Activated rectangle " << std::endl;
    }
    else if (tool == circle)
    {
        std::cout << "Activated circle " << std::endl;
    }
    else if (tool == ellipse)
    {
        std::cout << "Activated ellipse " << std::endl;
    }
}