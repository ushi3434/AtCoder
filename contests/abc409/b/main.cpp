#include <iostream>
#include <vector>

int main()
{
    int N;

    std::cin >> N;

    std::vector<int> A(N);

    for (int i = 0; i < N; i++)
        std::cin >> A[i];

    // 1~101で全探索
    for (int i = 1; i <= 101; i++)
    {
        int cnt = 0;

        for (auto num : A)
        {
            if (num >= i)
                cnt++;
        }

        // 条件を満たせなかった場合
        if (cnt < i)
        {
            std::cout << i - 1 << "\n";
            return 0;
        }

    }
    return 0;
}