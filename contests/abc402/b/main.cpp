#include <iostream>
#include <vector>
#include <string>
#include <queue>

int main(void)
{
    int Q;

    std::cin >> Q;

    std::deque<int> queue;

    for (int i = 0; i < Q; i++)
    {
        int input;
        std::cin >> input;

        if (input == 1)
        {
            int menu;
            std::cin >> menu;

            queue.push_back(menu);
        }
        else
        {
            std::cout << queue.front() << "\n";
            queue.pop_front();
        }
    }
}