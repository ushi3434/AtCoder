#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    if (C >= A && D < B)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}