#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main(void)
{
    float N;
    std::cin >> N;

    std::cout << (int)std::ceil(N *= 0.5f) << "\n";
}