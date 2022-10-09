#include <iostream>
#include <cstring>

int main()
{

    char input[]{"/home/user/murgi.cpp"};
    char *output = std::strrchr(input, '/');

    if (output)
    {
        std::cout << output + 1
                  << std::endl;
    }
}