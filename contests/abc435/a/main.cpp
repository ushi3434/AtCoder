#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;
    std::cin >> N;

    int ans = N * (N + 1) / 2;

    std::cout << ans << std::endl;
}