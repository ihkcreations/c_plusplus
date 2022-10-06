#include <iostream>

int main()
{
    auto var1{12};
    auto var2{19.0};
    auto var3{14.0f};
    auto var4{15.0l};

    auto var5{'e'};

    auto var6{123u};  // unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    std::cout << "var 1 occupies: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var 2 occupies: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var 3 occupies: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var 4 occupies: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var 5 occupies: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var 6 occupies: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var 7 occupies: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var 8 occupies: " << sizeof(var8) << " bytes" << std::endl;
}