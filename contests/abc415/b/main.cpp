#include <iostream>
#include <string>

int main()
{
    std::string S;

    std::cin >> S;

    int count = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '#')
        {
            int outputNum = i + 1;

            if (count % 2 == 0)
            {
                std::cout << outputNum << ",";
            }
            else
            {
                std::cout << outputNum << "\n";
            }
            count++;
        }
    }
}