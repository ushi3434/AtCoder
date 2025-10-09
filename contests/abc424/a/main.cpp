#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a == b || b == c || c == a)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}