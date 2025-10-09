#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, M, K;

    std::cin >> N >> M >> K;

    std::vector<int> answerCount(N + 1, 0);

    bool first = true;

    for (int i = 0; i < K; i++)
    {
        int A, B;

        std::cin >> A >> B;

        answerCount[A]++;

        if (answerCount[A] == M)
        {
            // 出力
            if (!first)
                std::cout << " ";
            else
                first = false;

            std::cout << A;
        }
    }

    std::cout << "\n";
}