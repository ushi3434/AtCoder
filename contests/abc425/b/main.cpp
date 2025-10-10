#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<int> A(N + 1, 0);
    std::vector<bool> isUsed(N + 1, false);

    for (int i = 1; i <= N; i++)
    {
        std::cin >> A[i];

        if (A[i] != -1)
        {
            if (isUsed[A[i]] == false)
                isUsed[A[i]] = true;
            else
            {
                // すでに文字が使用済みならPが存在しないのでNo
                std::cout << "No\n";
                return 0;
            }
        }
    }

    std::vector<int> ans(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        if (A[i] == -1)
        {
            // 使用されていない数字のうち、最も小さいものを使用する
            for (int j = 1; j <= N; j++)
            {
                if (isUsed[j])
                    continue;

                ans[i] = j;
                isUsed[j] = true;
                
                break;
            }
        }
        else
        {
            ans[i] = A[i];
        }
    }

    // 出力
    std::cout << "Yes\n";

    for (int i = 1; i <= N; i++)
    {
        if (i != 1)
            std::cout << " ";

        std::cout << ans[i];
    }

    std::cout << "\n";
}