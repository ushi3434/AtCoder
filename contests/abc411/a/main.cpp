#include <iostream>

int main()
{
    std::string P;
    std::cin >> P;

    int L;
    std::cin >> L;

    if (P.length() >= L)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";

    return 0;
}