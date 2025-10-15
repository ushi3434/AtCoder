#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int R, X;

    std::cin >> R >> X;

    if (X == 1)
    {
        if (1600 <= R && R <= 2999)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
    else
    {
        if (1200 <= R && R <= 2399)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
}