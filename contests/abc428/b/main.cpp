#include <iostream>
#include <vector>
#include <string>
#include <map>

int main(void)
{
    int N, K;
    std::string S;

    std::cin >> N >> K >> S;

    std::map<std::string, int> substrCount;

    for (int i = 0; i < N - K + 1; i++)
    {
        substrCount[S.substr(i, K)]++;
    }

    // 要素数の最も多いものを数える
    int maxElemCount = -1;
    std::vector<std::string> answerList(100);
    for (const auto &elem : substrCount)
    {
        int elemCount = elem.second;
        if (elemCount > maxElemCount)
        {
            maxElemCount = elemCount;
            answerList.clear();

            answerList.push_back(elem.first);
        }
        else if (elemCount == maxElemCount)
            answerList.push_back(elem.first);
    }

    std::cout << maxElemCount << "\n";

    const char *eol = " \n";

    for (int i = 0; i < answerList.size(); i++)
        std::cout << answerList[i] << eol[i == answerList.size() - 1];
}