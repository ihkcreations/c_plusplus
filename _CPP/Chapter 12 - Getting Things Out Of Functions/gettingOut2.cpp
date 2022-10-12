#include <iostream>

void max_int(int input1, int input2, int &output)
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
    int value1{45};
    int value2{58};
    int outputValue{};

    max_int(value1, value2, outputValue);

    std::cout << "Max Value : " << outputValue << std::endl;
}