#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, S;

    std::cin >> N >> S;

    int next = 0;
    int prev = 0;

    for (int i = 0; i < N; i++)
    {
        prev = next;
        std::cin >> next;

        if (next - prev > S)
        {
            std::cout << "No\n";
            return 0;
        }
    }

    std::cout << "Yes\n";
    return 0;
}