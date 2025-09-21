#include <iostream>
#include <string>

int main(void)
{
    int N, L, R;

    std::string S;

    std::cin >> N >> L >> R;

    std::cin >> S;

    for (int i = 0; i < R - L + 1; i++)
    {
        if (S[L + i - 1] == 'x')
        {
            std::cout << "No\n";
            return 0;
        }
    }

    std::cout << "Yes\n";
    return 0;
}