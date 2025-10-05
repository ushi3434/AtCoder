#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<std::string> S(N);
    std::vector<int> score(N, 0);

    for (int i = 0; i < N; i++)
    {
        std::cin >> S[i];
    }

    // 各投票の回答を確認し、点数を集計していく
    for (int i = 0; i < M; i++)
    {
        int x = 0;
        int y = 0;

        for (int j = 0; j < N; j++)
        {
            if (S[j][i] == '0')
                x++;
            else
                y++;
        }

        if (x == 0 || y == 0)
        {
            // 全員に点数を与える
            for (auto &elem : score)
                elem++;

            continue;
        }

        if (x < y)
        {
            // 0に投票した人のスコアを増やす
            for (int j = 0; j < N; j++)
            {
                if (S[j][i] == '0')
                    score[j]++;
            }
        }
        else
        {
            // 1に投票した人のスコアを増やす
            for (int j = 0; j < N; j++)
            {
                if (S[j][i] == '1')
                    score[j]++;
            }
        }
    }

    // 点数の最高値を取得
    int max = *std::max_element(score.begin(), score.end());

    // 最高スコアと同じものを出力してく
    bool first = true;
    for (int i = 0; i < score.size(); i++)
    {
        if (score[i] == max)
        {
            if (!first)
                std::cout << " ";
            else
                first = false;

            std::cout << i + 1;
        }
    }

    std::cout << "\n";
}