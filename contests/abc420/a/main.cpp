#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int X, Y;
    std::cin >> X >> Y;

    int ans = (X + Y) % 12;
    ans = ans == 0 ? 12 : ans;

    std::cout << ans << "\n";
}