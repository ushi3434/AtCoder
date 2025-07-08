#include <iostream>
#include <vector>
#include <algorithm>

// ボールの個数が最小で、かつ箱の番号が最小のものを返す
int CheckMinBox(const std::vector<int> &box)
{
    // ボールの個数の暫定最低値
    int min = 110;

    int minBoxIndex = -1;

    // ボックスの個数分(0は除く)ループ
    for (int i = 0; i < (int)box.size() - 1; ++i)
    {
        // 箱の番号はNから1までの逆順
        int boxIndex = (box.size() - 1) - i;

        // もし暫定最小値を更新したら
        if (box[boxIndex] <= min)
        {
            min = box[boxIndex];
            minBoxIndex = boxIndex;
        }
    }

    return minBoxIndex;
}

int main()
{
    int N, Q;

    std::cin >> N >> Q;

    std::vector<int> box(N + 1, 0);
    std::vector<int> ans(Q);

    // Q個のクエリを処理
    for (int i = 0; i < Q; ++i)
    {
        int num;
        std::cin >> num;

        if (num == 0)
        {
            // ボールの個数が最小のボックスに入れる
            int boxIndex = CheckMinBox(box);
            box[boxIndex]++;
            ans[i] = boxIndex;
        }
        else
        {
            // num番のボックスにボールを入れる
            box[num]++;
            ans[i] = num;
        }
    }

    // 結果を出力
    for (int i = 0; i < Q; ++i)
    {
        if (i > 0)
            std::cout << " ";

        std::cout << ans[i];
    }

    std::cout << std::endl;

    return 0;
}