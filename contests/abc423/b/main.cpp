#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;
    std::cin >> N;

    std::vector<int> L(N);

    for (auto &elem : L)
        std::cin >> elem;

    // 1人目が入れる部屋をカウント
    int aRoomCnt = 1;
    int currentRoom = 0;
    while (true)
    {
        if (currentRoom == N || L[currentRoom] == 1)
            break;

        currentRoom++;
        aRoomCnt++;
    }

    // 2人目が入れる部屋をカウント
    int bRoomCnt = 1;
    currentRoom = N;
    while (true)
    {
        if (currentRoom == 0 || L[currentRoom - 1] == 1)
            break;

        currentRoom--;
        bRoomCnt++;
    }

    int ans = std::max(0, N + 1 - (aRoomCnt + bRoomCnt));

    std::cout << ans << "\n";
}