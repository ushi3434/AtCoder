#include <iostream>
#include <vector>
#include <string>
#include <set>

int main(void)
{
    int N;

    std::cin >> N;

    std::set<int> A;

    for (int i = 0; i < N; i++)
    {
        int input;
        std::cin >> input;

        A.insert(input);
    }

    // 出力
    int size = A.size();
    std::cout << size << "\n";

    auto it = A.begin();
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
            std::cout << " ";

        std::cout << *it++;
    }

    std::cout << "\n";
}