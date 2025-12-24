#include <iostream>
#include <vector>
#include <string>

int Calc(int a, int b, int c)
{
    return a * 100 + b * 10 + c;
}

int main(void)
{
    int num[3];

    int ans = 0;

    for (auto &elem : num)
        std::cin >> elem;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
            {
                if (i != j && j != k && k != i)
                    ans = std::max(ans, Calc(num[i], num[j], num[k]));
            }

    std::cout << ans << "\n";
}