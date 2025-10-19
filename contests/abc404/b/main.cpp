#include <iostream>
#include <vector>
#include <string>

std::vector<std::vector<char>> RotateCW(std::vector<std::vector<char>> &source, int size)
{
    std::vector<std::vector<char>> ret(size, std::vector<char>(size));

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            ret[j][(size - 1) - i] = source[i][j];
        }

    return ret;
}

int CheckDiff(std::vector<std::vector<char>> &A, std::vector<std::vector<char>> &B, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (A[i][j] != B[i][j])
                ans++;
        }

    return ans;
}

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<std::vector<char>> S(N, std::vector<char>(N));
    std::vector<std::vector<char>> T(N, std::vector<char>(N));

    for (auto &array : S)
        for (auto &c : array)
            std::cin >> c;

    for (auto &array : T)
        for (auto &c : array)
            std::cin >> c;

    auto r1 = RotateCW(S, N);
    auto r2 = RotateCW(r1, N);
    auto r3 = RotateCW(r2, N);

    std::vector<int> diff(4);

    diff[0] = CheckDiff(T, S, N);
    diff[1] = CheckDiff(T, r1, N);
    diff[2] = CheckDiff(T, r2, N);
    diff[3] = CheckDiff(T, r3, N);

    int ans = 2147483647;

    for (int i = 0; i < 4; i++)
        ans = std::min(ans, diff[i] + i);

    std::cout << ans << "\n";
}