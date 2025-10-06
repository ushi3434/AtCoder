#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N, X;
    std::string Y;
    std::cin >> N;

    std::vector<std::string> S(N);

    for (auto &elem : S)
    {
        std::cin >> elem;
    }

    std::cin >> X >> Y;

    X--;

    if (S[X] == Y)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}