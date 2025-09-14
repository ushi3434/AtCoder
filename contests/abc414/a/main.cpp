#include <iostream>

int main(void)
{
    int N, L, R;

    std::cin >> N >> L >> R;

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        int X, Y;

        std::cin >> X >> Y;

        if (X <= L && R <= Y)
            ans++;
    }

    std::cout << ans << std::endl;
}