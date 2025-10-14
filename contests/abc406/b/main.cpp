#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, K;
    std::cin >> N >> K;

    std::vector<long long> A(N, 0);

    for (int i = 0; i < N; i++)
        std::cin >> A[i];

    long long number = 1;

    long long maxNum = 1;
    for (int i = 0; i < K; i++)
    {
        maxNum *= 10;
    }
    maxNum--;

    for (int i = 0; i < N; i++)
    {
        if (number > maxNum / A[i])
            number = 1;
        else
            number *= A[i];
    }

    std::cout << number << "\n";
}