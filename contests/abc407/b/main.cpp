#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main(void)
{
    int X, Y;

    std::cin >> X >> Y;

    int xCnt = 0;
    int yCnt = 0;
    int xyCnt = 0;

    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
        {
            bool xCheck = i + j >= X;
            bool yCheck = abs(i - j) >= Y;

            // Xを満たす組み合わせを数える
            if (xCheck)
                xCnt++;

            // Yを満たす組み合わせを数える
            if (yCheck)
                yCnt++;

            // XとYを同時に満たすものを数える
            if (xCheck && yCheck)
                xyCnt++;
        }

    double ans = ((double)xCnt + yCnt - xyCnt) / 36;

    std::cout << std::setprecision(17) << ans << "\n";
}