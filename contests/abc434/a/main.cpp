#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main(void)
{
    int W, B;

    std::cin >> W >> B;

    int ans = std::floor((W * 1000) / B) + 1;

    std::cout << ans << std::endl;
}