#include <iostream>
#include <vector>
#include <string>

int CalcSumOfDigits(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;

        num /= 10;
    }

    return sum;
}

int main(void)
{
    int N;

    std::cin >> N;

    int prev;
    int sum = 1;

    for (int i = 0; i < N - 1; i++)
    {
        prev = sum;
        sum += CalcSumOfDigits(prev);
    }

    std::cout << sum << "\n";
}