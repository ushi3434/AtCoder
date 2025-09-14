#include <iostream>
#include <string>

// 大文字チェック
static constexpr bool IsUpperCase(char letter)
{
    return 'A' <= letter && letter <= 'Z';
}

int main(void)
{
    std::string S, T;

    std::cin >> S;

    std::cin >> T;

    // Sの各文字について線形探索
    for (int i = 0; i < S.size(); i++)
    {
        if (i == 0)
            continue;

        if (IsUpperCase(S[i]))
        {
            bool satisfy = false;

            // i-1がTに含まれるか判定
            for (int j = 0; j < T.size(); j++)
            {
                if (T[j] == S[i - 1])
                    satisfy = true;
            }

            if (satisfy == false)
            {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}