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
        int in;
        std::cin >> in;

        if ((i % 2) == 0)
        {
            ans += in;
        }
    }

    std::cout << ans << "\n";
    return 0;
}