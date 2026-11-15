#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int K;
    std::cin >> K;

    // 卓上のボールの最小値
    int minimum = INT32_MAX;

    // 9が卓上にあるかどうか
    bool exist9 = false;

    for (int i = 0; i < K; i++)
    {
        int A;
        std::cin >> A;

        minimum = std::min(minimum, A);

        if (A == 9)
            exist9 = true;
    }

    if (exist9 == false)
        std::cout << "-1\n";
    else
        std::cout << minimum << "\n";

    return 0;
}