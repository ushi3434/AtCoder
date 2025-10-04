#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, Q;

    std::cin >> N >> Q;

    // バケツ
    std::vector<int> bucket(N + 1, 1);
    bucket[0] = 0;

    int oldestVersion = 1;

    // クエリを実行していく
    for (int i = 0; i < Q; i++)
    {
        int X, Y;

        std::cin >> X >> Y;

        int upgradeCnt = 0;

        
        if (oldestVersion > X)
        {
            // Xよりも最古のバージョンのほうが新しい場合は、更新を行わない
        }
        else
        {
            // アップグレードを行う
            for (int j = 0; j < X - oldestVersion + 1; j++)
            {
                upgradeCnt += bucket[oldestVersion + j];
            }
            oldestVersion = X + 1;
        }

        bucket[Y] += upgradeCnt;

        // 出力
        std::cout << upgradeCnt << "\n";
    }
}