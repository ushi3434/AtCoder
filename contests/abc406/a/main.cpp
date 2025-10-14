#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    if (A > C)
        std::cout << "Yes\n";
    else if (A == C && B > D)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}