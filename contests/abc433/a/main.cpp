#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int X, Y, Z;

    std::cin >> X >> Y >> Z;

    for (int i = 0; i < 10000; i++)
    {
        // 倍数かチェック
        if (X == Y * Z)
        {
            std::cout << "Yes\n";
            return 0;
        }

        // 年を取る
        X++;
        Y++;
    }

    // もし倍数になっていなかったらNoを出力
    std::cout << "No\n";
    return 0;
}