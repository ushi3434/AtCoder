#include <iostream>

int main(void)
{
    int B, R;
    std::cin >> B >> R;

    int ans = (30 - B) * (30 - R);
    std::cout << ans << "\n";
    return 0;
}