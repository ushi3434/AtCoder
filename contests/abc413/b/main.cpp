#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<std::string> inputStr(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> inputStr[i];
    }

    std::set<std::string> strTable;

    // 全組み合わせを試す
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;

            // 文字列を作成し、tableに記録
            strTable.insert(inputStr[i] + inputStr[j]);
        }
    }

    std::cout << strTable.size() << std::endl;
}