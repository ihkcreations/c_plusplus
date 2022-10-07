#include <iostream>

int main()
{

    const int pen{10};
    const int marker{20};
    const int eraser{30};
    const int rectangle{40};
    const int circle{50};
    const int ellipse{60};

    int tool{ellipse};

    switch (tool)
    {
    case pen:
        std::cout << "Activated pen" << std::endl;
        break;

    case marker:
        std::cout << "Activated marker" << std::endl;
        break;

    case eraser:
        std::cout << "Activated eraser" << std::endl;
        break;

    case rectangle:
        std::cout << "Activated rectangle" << std::endl;
        break;

    case circle:
        std::cout << "Activated circle" << std::endl;
        break;

    case ellipse:
        std::cout << "Activated ellipse" << std::endl;
        break;

    default:
        std::cout << "Cannot catch any tool" << std::endl;
        break;
    }
}