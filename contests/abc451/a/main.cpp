#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::string S;

    std::cin >> S;

    if (S.length() % 5 == 0)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}