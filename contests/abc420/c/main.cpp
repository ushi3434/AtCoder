#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    int N, Q;

    std::cin >> N >> Q;

    std::vector<int> A(N), B(N), minimum(N);

    for (auto &elem : A)
        std::cin >> elem;

    for (auto &elem : B)
        std::cin >> elem;

    long long minSum = 0;

    // 互いのうち、最小値を保存する
    for (int i = 0; i < N; i++)
    {
        minimum[i] = std::min(A[i], B[i]);
        minSum += minimum[i];
    }

    // クエリを処理していく
    for (int i = 0; i < Q; i++)
    {
        char c;
        int X, V;

        std::cin >> c >> X >> V;
        X--;

        if (c == 'A')
            A[X] = V;
        else
            B[X] = V;

        // 最小値の更新
        int oldMin = minimum[X];
        minimum[X] = std::min(A[X], B[X]);

        int diff = minimum[X] - oldMin;

        minSum += diff;

        // 出力
        std::cout << minSum << "\n";
    }
}