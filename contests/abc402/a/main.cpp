#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::string S;

    std::cin >> S;

    std::string ans;

    for (const auto &c : S)
        if ('A' <= c && c <= 'Z')
            ans.push_back(c);

    std::cout << ans << "\n";
}