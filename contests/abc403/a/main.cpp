#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        int input;

        std::cin >> input;

        if (i % 2 == 0)
            ans += input;
    }

    std::cout << ans << "\n";
}