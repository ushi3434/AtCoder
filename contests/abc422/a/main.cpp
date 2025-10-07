#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    char str[4];

    std::cin >> str;

    if (str[2] - '0' < 8)
    {
        std::cout << str[0] << "-" << (char)(str[2] + 1) << "\n";
    }
    else if (str[0] - '0' < 8 && str[2] - '0' == 8)
    {
        std::cout << (char)(str[0] + 1) << "-" << 1 << "\n";
    }
}