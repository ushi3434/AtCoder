#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int H, B;

    std::cin >> H >> B;

    int ans = std::max(0, H - B);

    std::cout << ans << "\n";
}