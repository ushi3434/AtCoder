#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<char> bucket(128 + 5, 0);

    std::string S;

    std::cin >> S;

    for (const auto &c : S)
    {
        bucket[c]++;
    }

    // 要素数が1のものを探索し、出力する
    for (int i = 0; i < bucket.size(); i++)
    {
        if (bucket[i] == 1)
        {
            std::cout << (char)i << "\n";
            break;
        }
    }
}