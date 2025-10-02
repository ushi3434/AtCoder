#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main(void)
{
    std::string S;

    std::cin >> S;

    double maxFillingRate = 0.0;

    // tの個数の累積和を求める
    std::vector<int> tSum(S.size(), 0);
    for (int i = 0; i < S.size(); i++)
    {
        tSum[i] = (S[i] == 't' ? 1 : 0) + (i > 0 ? tSum[i - 1] : 0);
    }

    // 文字列全体が3未満かどうか判定する
    if (S.size() < 3)
    {
        std::cout << "0.00000000000000000\n";
        return 0;
    }

    for (int i = 0; i < S.size() - 2; i++)
        for (int j = 0; j < S.size() - 2 - i; j++)
        {
            int startIndex = i;
            int endIndex = i + j + 2;

            if (S[startIndex] != 't' || S[endIndex] != 't')
                continue;

            // 文字列内のtの個数
            int cnt = tSum[endIndex] - (startIndex > 0 ? tSum[startIndex - 1] : 0);

            double rate = static_cast<double>(cnt - 2) / static_cast<double>(endIndex - startIndex + 1 - 2);

            maxFillingRate = std::max(maxFillingRate, rate);
        }

    std::cout << std::fixed << std::setprecision(17) << maxFillingRate << "\n";
}