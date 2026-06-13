#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    // 方針
    // sweep and pruneっぽい感じで、毎時間の犯行可能人数を数え上げて、組み合わせをカウントアップ

    int N, D;

    std::cin >> N >> D;

    std::array<int, 1000001> delta{};

    for (int i = 0; i < N; i++)
    {
        int S, T;

        std::cin >> S >> T;

        if (T - S < D)
            continue;

        delta[S]++;
        delta[T - D + 1]--;
    }

    // t時点で犯行完遂可能な人数
    long long suspects = 0;

    long long ans = 0;

    for (int t = 0; t < 1000001; t++)
    {
        suspects += delta[t];

        if (suspects > 1)
            ans += suspects * (suspects - 1) / 2;
    }

    std::cout << ans << "\n";
}