#include <iostream>
#include <vector>
#include <string>
#include <numeric>

std::vector<int> deck;

void Flip(int flipCount)
{
    std::vector<int> tmp(deck.rend() - flipCount, deck.rend());

    for (int i = 0; i < flipCount; i++)
    {
        deck[i] = -tmp[i];
    }
}

int main(void)
{
    int N, Q;
    std::cin >> N >> Q;

    deck.resize(N);
    std::iota(deck.begin(), deck.end(), 1);

    for (int i = 0; i < Q; i++)
    {
        int K;
        std::cin >> K;
        Flip(K);
    }

    // 出力
    for (int i = 0; i < N; i++)
    {
        std::cout << deck[i] << "\n";
    }

    return 0;
}