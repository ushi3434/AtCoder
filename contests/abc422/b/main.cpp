#include <iostream>
#include <vector>
#include <string>

int H, W;
std::vector<std::string> board;

bool CheckNeighbor(int y, int x)
{
    static constexpr int dy[4] = {-1, 1, 0, 0};
    static constexpr int dx[4] = {0, 0, -1, 1};

    int blackCount = 0;

    //(y,x)の上下左右で隣り合うマスの色を確認
    for (int i = 0; i < 4; i++)
    {

        if (y + dy[i] < 0 || H <= y + dy[i] ||
            x + dx[i] < 0 || W <= x + dx[i])
            continue;

        if (board[y + dy[i]][x + dx[i]] == '#')
            blackCount++;
    }

    if (blackCount == 2 || blackCount == 4)
        return true;
    else
        return false;
}

int main(void)
{
    std::cin >> H >> W;

    board.resize(H);
    for (int i = 0; i < H; i++)
    {
        std::cin >> board[i];
    }

    bool ans = true;

    // すべての黒マスが条件を満たしているか確認
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
        {
            if (board[i][j] == '#' && CheckNeighbor(i, j) == false)
            {
                ans = false;
                break;
            }
        }

    if (ans == true)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}