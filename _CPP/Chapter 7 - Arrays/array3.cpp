#include <iostream>

int main()
{

    int class_sizes[]{10, 12, 15, 11, 18, 17};

    for (auto value : class_sizes)
    {
        std::cout << "value : " << value << std::endl;
    }
}