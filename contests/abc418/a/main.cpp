#include <iostream>
#include <vector>
#include <string>

bool IsTea(const std::string& S)
{
    std::string t("tea");

    return S.substr(S.size() - 3,3) == t;
}

int main(void)
{
    int N;

    std::cin >> N;

    std::string S;
    S.resize(N);
    for(int i = 0;i<N;i++)
    {
        std::cin >> S[i];
    }


    if (S.size() < 3 || !IsTea(S))
    {
        std::cout << "No\n";
    }
    else
    {
        std::cout << "Yes\n";
    }
}