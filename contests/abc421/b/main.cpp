#include <iostream>
#include <vector>
#include <string>

long long func(long long x)
{
    long long ans = 0;

    std::vector<int> digit;

    while (x != 0)
    {
        digit.push_back(x % 10);
        x /= 10;
    }

    for (int i = 0; i < digit.size(); i++)
    {
        long long num = *(digit.begin() + i);

        for (int j = 0; j < digit.size() - 1 - i; j++)
        {
            num *= 10;
        }
        ans += num;
    }

    return ans;
}

int main(void)
{
    int X, Y;

    std::cin >> X >> Y;

    std::vector<long long> a(10 + 5, 0);
    a[1] = X;
    a[2] = Y;

    // a_10が求まるまで反復実行
    for (int i = 3; i <= 10; i++)
    {
        a[i] = func(a[i - 2] + a[i - 1]);
    }

    std::cout << a[10] << "\n";
}