#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        std::cin >> N;

        std::vector<int> S(N);

        for (int j = 0; j < N; j++)
            std::cin >> S[j];

        // ソート(両端はそのまま)
        if (S.size() > 2)
            std::sort(S.begin() + 1, S.end() - 1);

        int currentEndIndex = 0;  // 現在の末尾のドミノのindex
        int placeDominoCount = 1; // おかれているドミノの数

        for (int k = 1; k < S.size(); k++)
        {
            // 設置末尾ドミノで倒せないドミノが出現したら
            if (2 * S[currentEndIndex] < S[k])
            {
                // もし、ひとつ前のドミノが設置末尾ドミノと同じでないなら、ひとつ前のものを末尾に追加で設置する
                if (currentEndIndex != k - 1)
                {
                    currentEndIndex = k - 1;
                    placeDominoCount++;
                }
            }
        }

        // 最後のドミノを倒せるか確認
        if (2 * S[currentEndIndex] >= S.back())
            placeDominoCount++;
        else
            placeDominoCount = -1;

        // 出力
        std::cout << placeDominoCount << std::endl;
    }
}