#include <iostream>

void max_string(const std::string &input1, const std::string &input2,
                std::string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {

        output = input2;
    }
}

int main()
{
    std::string string1{"Apple"};
    std::string string2{"Bottle"};
    std::string outputString{};

    max_string(string1, string2, outputString);

    std::cout << "Max String : " << outputString << std::endl;
}