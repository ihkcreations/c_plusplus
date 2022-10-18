#include <iostream>

int main()
{

    int x = 1;
    int z = 4;

    int y = ++x + (++x);
    // int a = --z + x++ - --x;

    std::cout << y << std::endl;
    // std::cout << a << std::endl;
}