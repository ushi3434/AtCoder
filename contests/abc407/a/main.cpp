#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int A, B;

    std::cin >> A >> B;

    std::cout << (int)((float)A / B + 0.5f) << "\n";
}