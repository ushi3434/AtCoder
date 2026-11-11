#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;
    std::cin >> N;

    int rainyStreak = 0;

    int maxRainyStreak = 0;

    for (int i = 0; i < N; i++)
    {
        char in;
        std::cin >> in;

        if (in == 'R')
            rainyStreak++;
        else
            rainyStreak = 0;

        maxRainyStreak = std::max(maxRainyStreak, rainyStreak);
    }

    std::cout << maxRainyStreak << "\n";
    return 0;
}