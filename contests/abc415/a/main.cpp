#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);

    for (auto &num : A)
        std::cin >> num;

    int X;
    std::cin >> X;

    for (const auto &num : A)
    {
        if (num == X)
        {
            std::cout << "Yes\n";
            return 0;
        }
    }

    std::cout << "No\n";
    return 0;
}