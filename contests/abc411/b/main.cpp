#include <iostream>
#include <vector>

int main(void)
{
    int N;
    std::cin >> N;

    // 始点の駅からの累積距離
    std::vector<int> distanceSum(N, 0);

    for (int i = 1; i < N; i++)
    {
        int input;
        std::cin >> input;

        distanceSum[i] = distanceSum[i - 1] + input;
    }

    // 出力
    for (int i = 0; i < N - 1; i++)
    {
        int originIndex = i;

        for (int j = 0; j < N - 1 - i; j++)
        {
            int destinationIndex = i + j + 1;
            if (j != 0)
                std::cout << " ";

            std::cout << distanceSum[destinationIndex] - distanceSum[originIndex];
        }

        std::cout << "\n";
    }

    return 0;
}
