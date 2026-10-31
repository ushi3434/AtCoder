#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    char input;

    char isOdd;

    while (std::cin >> input)
    {
        isOdd ^= (input == 'o' ? 1 : 0);
    }

    if (isOdd)
        std::cout << "odd\n";
    else
        std::cout << "even\n";

    return 0;
}