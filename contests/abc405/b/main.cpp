#include <iostream>
#include <vector>
#include <string>

bool ContainsAllInteger(const std::vector<int> &bucket, int M)
{
    for (int i = 1; i <= M; i++)
    {
        if (bucket[i] == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<int> A(N);
    std::vector<int> bucket(100 + 1, 0);

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        bucket[A[i]]++;
    }

    int ans = 0;

    // 条件を満たさなくなるまで、ループ
    while (ContainsAllInteger(bucket, M))
    {
        // 末尾を削除
        bucket[A.back()]--;
        A.pop_back();

        ans++;
    }

    std::cout << ans << "\n";
}