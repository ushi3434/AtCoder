#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::string S;

    std::cin >> S;

    S.erase((S.size() + 1) / 2 - 1, 1);

    std::cout << S << "\n";
}