#include <iostream>
#include <string>

int main(void)
{
    int N, A, B;

    std::cin >> N >> A >> B;

    std::string S;

    S.reserve(N);
    std::cin >> S;

    for (int i = 0; i < N - A - B; i++)
        std::cout << S[A + i];

    std::cout << std::endl;
    return 0;
}