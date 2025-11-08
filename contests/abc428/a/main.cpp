#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int S, A, B, X;

    std::cin >> S >> A >> B >> X;

    int rest = X;

    int ans = 0;

    while (rest > 0)
    {
        int sec = std::min(rest, A);

        rest -= sec;

        ans += sec * S;

        rest -= B;
    }

    std::cout << ans << "\n";
}