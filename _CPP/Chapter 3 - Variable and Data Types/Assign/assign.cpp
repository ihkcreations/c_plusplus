#include <iostream>

int main()
{

    bool state{false};
    std::cout << "state : " << std::boolalpha << state << std::endl;

    state = true; // assigning new type;
    std::cout << "state : " << std::boolalpha << state << std::endl;
    //-------------------------------------------------------//

    int var1{256};
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 125; // assigning new variable value without declaring it again
    std::cout << "var1 : " << var1 << std::endl;

    //------------------------------------------------------------//
    double var2{256.65};
    std::cout << "var2 : " << var2 << std::endl;

    var2 = 125.85; // assigning new variable value without declaring it again
    std::cout << "var2 : " << var2 << std::endl;
}