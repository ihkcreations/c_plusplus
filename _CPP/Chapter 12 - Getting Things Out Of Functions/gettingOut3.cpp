#include <iostream>

void max_double(double input1, double input2, double *output)
{

    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

int main()
{
    double value1{45.62};
    double value2{58.84};
    double outputValue{};

    max_double(value1, value2, &outputValue);

    std::cout << "Max Value : " << outputValue << std::endl;
}