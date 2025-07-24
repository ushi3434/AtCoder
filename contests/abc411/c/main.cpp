#include <iostream>
#include <vector>

#define BLACK true
#define WHITE false

int main()
{
    int N, Q;

    std::cin >> N >> Q;

    std::vector<bool> box(N + 1, WHITE);

    // 出力用バッファ
    std::vector<int> ans(Q);

    // 連続カウント
    int intervalCount = 0;

    // クエリ
    for (int i = 0; i < Q; i++)
    {
        int input;
        std::cin >> input;

        if (input == 1)
        {
            if (box[input + 1] == WHITE)
            {
                if (box[input] == WHITE)
                    intervalCount++;

                else
                    intervalCount--;
            }
        }
        else if (input == N)
        {
            if (box[input - 1] == WHITE)
            {
                if (box[input] == WHITE)
                    intervalCount++;

                else
                    intervalCount--;
            }
        }
        else
        {
            // 両隣が白の場合
            if (box[input - 1] == WHITE && box[input + 1] == WHITE)
            {
                if (box[input] == WHITE)
                    intervalCount++;
                else
                    intervalCount--;
            }

            // 両隣が黒の場合
            if (box[input - 1] == BLACK && box[input + 1] == BLACK)
            {
                if (box[input] == BLACK)
                    intervalCount++;
                else
                    intervalCount--;
            }
        }

        // 色の反転
        box[input] = !box[input];

        ans[i] = intervalCount;
    }

    // 出力
    for (int i = 0; i < Q; i++)
    {
        std::cout << ans[i] << std::endl;
    }
}