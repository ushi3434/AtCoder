#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> currentYearDivCount(M + 1, 0);
    std::vector<int> nextYearDivCount(M + 1, 0);

    for (int i = 0; i < N; i++)
    {
        int A, B;
        std::cin >> A >> B;

        currentYearDivCount[A]++;
        nextYearDivCount[B]++;
    }

    for (int i = 1; i <= M; i++)
    {
        std::cout << nextYearDivCount[i] - currentYearDivCount[i] << "\n";
    }
}
