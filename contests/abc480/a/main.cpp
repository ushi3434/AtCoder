#include <iostream>
#include <vector>
#include <string>
#include <map>

int main(void)
{
    std::pair<int, int> A;
    std::pair<int, int> D;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            char c;
            std::cin >> c;

            if (c == 'A')
                A = std::make_pair(i, j);
            else if (c == 'D')
                D = std::make_pair(i, j);
        }
    }

    if ((A.first == D.first) || (A.second == D.second))
    {
        std::cout << "Yes\n";
        return 0;
    }
    else
    {
        std::cout << "No\n";
        return 0;
    }
}