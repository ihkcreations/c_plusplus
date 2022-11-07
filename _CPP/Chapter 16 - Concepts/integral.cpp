#include <iostream>
#include <concepts>

template <typename T>
requires integral<T> T add(T a, T b);
{
    return a + b;
}

int main()
{
    char a{10};
    char b{20};

    auto result_a = add(a, b);
    std::cout << "result_a: " << result_a << std::endl;
}
