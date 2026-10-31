#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int A, B;

    std::cin >> A >> B;

    if (A + B >= 10)
        std::cout << 2;
    else
        std::cout << 1;

    std::cout << "\n";

    return 0;
}