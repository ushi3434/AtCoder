#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<bool> isUsed(26, false);

    std::string S;
    std::cin >> S;

    for (const auto &c : S)
        isUsed[c - 'a'] = true;

    char output;

    for (int i = 0; i < 26; i++)
    {
        if (isUsed[i] == false)
        {
            output = i + 'a';
            break;
        }
    }

    std::cout << output << "\n";
}