#include <iostream>
#include <string>

int main()
{
    std::string S;
    std::cin >> S;

    std::string ans;

    for (auto c : S)
    {
        int num = c - '0';
        if (num >= 10)
            continue;

        ans += c;
    }

    std::cout << ans << "\n";
}