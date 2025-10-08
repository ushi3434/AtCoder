#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    long long X, C;

    std::cin >> X >> C;

    long long ans = X / (1000 + C);
    ans *= 1000;

    std::cout << ans << "\n";
}