#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::string T, U;

    std::cin >> T >> U;

    for (int i = 0; i < T.size() - U.size() + 1; i++)
    {
        bool contains = true;

        for (int j = 0; j < U.size(); j++)
        {
            if (T[i + j] != '?' && T[i + j] != U[j])
            {
                contains = false;
                break;
            }
        }

        if (contains)
        {
            std::cout << "Yes\n";
            return 0;
        }
    }

    std::cout << "No\n";
    return 0;
}