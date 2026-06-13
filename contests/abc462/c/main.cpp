#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Pos
{
    int x;
    int y;
};

int main(void)
{
    // 方針
    // xが小さい点から順次チェックしていく。
    // チェックする点のYが過去にチェックした点の最低Y以下であればスコア+1、そうでなければスコア+0

    // 計算量
    // ソート O(nlogn)
    // +
    // ループ O(n)

    int N;

    std::cin >> N;

    std::vector<Pos> points(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> points[i].x >> points[i].y;
    }

    std::sort(points.begin(), points.end(), [](const Pos &a, const Pos &b)
              { return a.x < b.x; });

    int score = 0;
    int minY = INT32_MAX;

    for (Pos point : points)
    {
        if (point.y <= minY)
        {
            score++;
            minY = point.y;
        }
    }

    std::cout << score << "\n";
}