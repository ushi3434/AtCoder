#include <iostream>
#include <vector>
#include <string>

// 一致していない文字の個数を返す
// (文字列の文字数は同じ前提)
int CheckDiff(const std::string &A, const std::string &B)
{
    int ans = 0;

    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] != B[i])
            ans++;
    }

    return ans;
}

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<std::string> S(N);
    std::vector<int> votes(N, 0);

    for (auto &s : S)
        std::cin >> s;

    for (int i = 0; i < M; i++)
    {
        std::string T;
        std::cin >> T;

        // 投票候補
        int targetCandidate = -1;
        int targetCandidateCount = 0;

        for (int j = 0; j < N; j++)
        {
            const auto &s = S[j];

            // 文字数が一致していなければ無効票
            if (s.length() != T.length())
                continue;

            // 違う文字の個数
            int diffCount = CheckDiff(s, T);

            if (diffCount == 0)
            {
                votes[j]++;
                targetCandidateCount = 0;
                break;
            }
            else if (diffCount == 1)
            {
                targetCandidateCount++;
                targetCandidate = j;
            }
        }

        // 候補が1つのみ存在すれば、票を入れておく
        if (targetCandidateCount == 1)
            votes[targetCandidate]++;
    }

    // 出力
    for (auto &voteCount : votes)
    {
        std::cout << voteCount << "\n";
    }
}
