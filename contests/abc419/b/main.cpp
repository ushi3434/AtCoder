#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    // multimapでやろうとしたが、使い方しらんのでバケツでやる
    std::vector<int> bucket(101, 0);

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int query;
        std::cin >> query;

        if (query == 1)
        {
            int num;
            std::cin >> num;

            bucket[num]++;
        }
        else
        {
            // 要素が1以上の最小のバケツを計算して、クエリを達成

            for (int j = 1; j < bucket.size(); j++)
            {
                if (bucket[j] > 0)
                {
                    // このバケツでクエリを実行
                    std::cout << j << "\n";
                    bucket[j]--;
                    break;
                }
            }
        }
    }
}