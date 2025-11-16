#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        if (i < M)
        {
            std::cout << "OK\n";
        }
        else
        {
            std::cout << "Too Many Requests\n";
        }
    }
}