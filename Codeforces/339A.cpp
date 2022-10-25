#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

int main()
{

    std::string s;
    std::cin >> s;

    long int a[100];
    long int len, temp;

    long int count{};
    len = s.length();

    for (size_t i{}; i < len; i += 2)
    {
        if (s[i] == '1')
        {
            a[count] = 1;
            count++;
        }
        else if (s[i] == '2')
        {
            a[count] = 2;
            count++;
        }
        else if (s[i] == '3')
        {
            a[count] = 3;
            count++;
        }
    }

    for (size_t i{}; i < count; i++)
    {

        for (size_t j{i + 1}; j < count; j++)
        {

            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (size_t i{}; i < count; i++)
    {
        std::cout << a[i];
        if (i != count - 1)
        {
            std::cout << "+";
        }
    }

    return 0;
}