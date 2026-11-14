#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, K;

    std::cin >> N >> K;

    int ans = 0;

    int A, oldA;

    for (int i = 0; i < N; i++)
    {
        std::cin >> A;

        // 最初だけややこしいから特別扱い
        if (i == 0)
        {
            if (A == K)
                ans++;

            oldA = A;
            continue;
        }

        // 判定チェック
        // 基本的に、前回の点と今回の点をチェックして、その間にkである点があるかどうかをチェックしていく
        //
        // 前回の点がkと等しい場合：制約から、y座標がkの点は増えない
        // 今回の点がkと等しい場合：y座標がkの点は必ず増える
        // それ以外：前回と今回の点の間にkが存在する場合、y座標がkの点が増える
        //   ->(前回の点 < K < 今回の点) || (今回の点 < K < 前回の点)のとき ans++

        if (oldA == K)
        {
            // 絶対にkは増えないよね～
        }
        else if (A == K)
        {
            // 絶対にkは増える
            ans++;
        }
        else
        {
            // 前回と今回の点の間にkが存在する場合、y座標がkの点が増える
            if ((oldA < K && K < A) || (A < K && K < oldA))
                ans++;
        }

        oldA = A;
    }

    std::cout << ans << "\n";
    return 0;
}