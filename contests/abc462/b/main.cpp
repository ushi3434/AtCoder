#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<std::vector<int>> giftBucket;

    giftBucket.resize(N + 1);

    for (int i = 1; i <= N; i++)
    {
        int K;
        std::cin >> K;

        for (int j = 0; j < K; j++)
        {
            int A;
            std::cin >> A;

            giftBucket[A].emplace_back(i);
        }
    }

    // 出力
    for (int i = 1; i <= N; i++)
    {
        // ギフトの数
        std::cout << giftBucket[i].size() << " ";

        for (int j = 0; j < giftBucket[i].size(); j++)
        {
            if (j != 0)
                std::cout << " ";

            std::cout << giftBucket[i][j];
        }

        std::cout << "\n";
    }
}