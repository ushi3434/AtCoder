#include <iostream>
#include <vector>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<int> A(N);
    std::vector<int> B(M);

    for (auto &num : A)
        std::cin >> num;

    for (auto &num : B)
        std::cin >> num;

    for (const auto &bNum : B)
        for (auto &aNum : A)
            if (bNum == aNum)
            {
                aNum = -1;
                break;
            }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == -1)
            continue;

        std::cout << A[i];

        if (i != A.size() - 1)
            std::cout << " ";
    }

    std::cout << "\n";
}