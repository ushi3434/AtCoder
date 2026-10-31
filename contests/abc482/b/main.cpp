#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    bool hasHole[5][5]{};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            char in;
            std::cin >> in;

            hasHole[i][j] = in == 'o' ? 1 : 0;
        }
    }

    // ビンゴ成立の全組み合わせをチェックして、穴が最も空いてる組み合わせの穴の数を記録

    int bestHoleCount = 0;

    // 行チェック
    for (int i = 0; i < 5; i++)
    {
        int count = 0;

        for (int j = 0; j < 5; j++)
        {
            if (hasHole[i][j])
                count++;
        }

        bestHoleCount = std::max(bestHoleCount, count);
    }

    // 列チェック
    for (int i = 0; i < 5; i++)
    {
        int count = 0;

        for (int j = 0; j < 5; j++)
        {
            if (hasHole[j][i])
                count++;
        }

        bestHoleCount = std::max(bestHoleCount, count);
    }

    // 斜め(右肩下がり)
    {
        int count = 0;

        for (int i = 0; i < 5; i++)
        {
            if (hasHole[i][i])
                count++;
        }

        bestHoleCount = std::max(bestHoleCount, count);
    }

    // 斜め(右肩上がり)
    {
        int count = 0;

        for (int i = 0; i < 5; i++)
        {
            if (hasHole[4 - i][i])
                count++;
        }

        bestHoleCount = std::max(bestHoleCount, count);
    }

    // 出力
    std::cout << 5 - bestHoleCount << "\n";

    return 0;
}