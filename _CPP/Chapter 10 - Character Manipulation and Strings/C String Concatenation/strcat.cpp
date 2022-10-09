#include <iostream>
#include <cstring>

int main()
{

    char string1[50]{"Iftekhar "};
    char string2[50]{"Hossain "};
    char string3[50]{"Khan"};

    std::strcat(string1, string2);
    std::strcat(string1, string3);

    std::cout << "Final message of concatenation : " << string1 << std::endl;
}