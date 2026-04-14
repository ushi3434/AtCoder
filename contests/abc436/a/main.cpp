#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int N;
    std::string S;

    std::cin >> N >> S;

    int loopCount = N - S.length();

    for (int i = 0; i < loopCount; i++)
    {
        S = 'o' + S;
    }

    std::cout << S << std::endl;
}