#include <iostream>
#include <cstring>

int main()
{

    const char *string{"Try not. Do, or do not. There is no try"};
    char target = 'T';
    const char *result = string;
    int iteration{};

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target
                  << "' starting at '"
                  << result << "\n";

        ++result;
        ++iteration;
    }

    std::cout << "Iterations : " << iteration << std::endl;
}