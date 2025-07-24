#include <iostream>
#include <vector>

int main()
{
    int N, K;
    std::cin >> N;
    std::vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }
    std::cin >> K;

    int ans = 0;

    // N個のコンテストを線形探索
    for (int i = 0; i < N; ++i)
    {
        if (K <= A[i])
            ans++;
    }

    // 出力
    std::cout << ans << std::endl;
    return 0;
}