#include <iostream>

int main(void)
{
    int N, M;
    std::cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        int num = static_cast<int>(M / N) + (M % N >= i ? 1 : 0);

        std::cout << num << "\n";
    }

    return 0;
}