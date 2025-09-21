#include <iostream>
#include <string>

int main(void)
{
    std::string S;
    std::string ans;

    std::cin >> S;
    ans.resize(S.size());

    bool canPlace = true;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '#')
        {
            ans[i] = '#';

            canPlace = true;
        }
        else
        {
            if (canPlace)
            {
                ans[i] = 'o';
                canPlace = false;
            }
            else
            {
                ans[i] = '.';
            }
        }
    }

    std::cout << ans << std::endl;
}