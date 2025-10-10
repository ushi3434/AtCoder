#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        ans += i * i * i * (i % 2 ? -1 : 1);
    }

    std::cout << ans << "\n";
}