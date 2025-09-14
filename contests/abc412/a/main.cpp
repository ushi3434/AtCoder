#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        int A, B;

        std::cin >> A >> B;

        if (B > A)
            ans++;
    }

    std::cout << ans << std::endl;
}