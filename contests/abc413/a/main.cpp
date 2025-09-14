#include <iostream>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int input;
        std::cin >> input;

        sum += input;
    }

    if (sum <= M)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";

    return 0;
}