#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
    int H, W, N, Q;

    std::cin >> H >> W >> N >> Q;

    // 方針：
    // クエリの内容が単純なので、縦軸・横軸の累積和を事前に保持しておくだけでいいのでは？ 駒の数的にint * H,int * Wだけでメモリは済む。クエリ回答時の負荷は当然問題ない。これでいくか
    // 追記 H,Wがでかすぎて多分エラー出されてる。全グリッドを扱わない法が良いから、駒に着目する方でやり直すか？
    // 駒の座標のみを記録する方式に変更。クエリ指定範囲の端っこの駒2つのindexを調べて、差分チェックし間にある要素数をチェックする。

    // 駒座標
    std::vector<int> rows(N, 0);
    std::vector<int> cols(N, 0);

    // 入力処理
    for (int i = 0; i < N; i++)
    {
        std::cin >> rows[i] >> cols[i];
    }

    std::sort(rows.begin(), rows.end());
    std::sort(cols.begin(), cols.end());

    // クエリ処理
    for (int i = 0; i < Q; i++)
    {
        int q, start, end;
        std::cin >> q >> start >> end;

        if (q == 1) // 行
        {
            auto startIt = std::lower_bound(rows.begin(), rows.end(), start); // 範囲内1つ目
            auto endIt = std::upper_bound(rows.begin(), rows.end(), end);     // 範囲外1つ目

            std::cout << endIt - startIt;
        }
        else // 列
        {
            auto startIt = std::lower_bound(cols.begin(), cols.end(), start); // 範囲内1つ目
            auto endIt = std::upper_bound(cols.begin(), cols.end(), end);     // 範囲外1つ目

            std::cout << endIt - startIt;
        }

        std::cout << "\n";
    }

    return 0;
}