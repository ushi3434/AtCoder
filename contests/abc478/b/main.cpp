#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    // 動的計画法でできるだろうけど、正直やり方がわからないので、今回は愚直に三重ループで最大値を記録する方式でやる
    int N, V;
    std::cin >> N >> V;

    std::vector<int> W(N + 10, 0);

    for (int i = 0; i < N; i++)
        std::cin >> W[i + 1];

    int ans = 0;

    // 愚直に三重ループ
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                // ijkが相異でない場合はスキップ
                if (i == j || j == k || k == i)
                    continue;

                // コストオーバーしてたらスキップ
                if (i + j + k > V)
                    continue;

                ans = std::max(ans, W[i] + W[j] + W[k]);
            }
        }
    }

    // 出力
    std::cout << ans << "\n";

    return 0;
}