#include <iostream>

int main()
{
    int N;

    std::string T, A;

    std::cin >> N >> T >> A;

    for (int i = 0; i < N; i++)
    {
        if (T[i] == 'o' && A[i] == 'o')
        {
            std::cout << "Yes";
            return 0; 
        }
    }

    //衝突なかったので、Noで終了
    std::cout << "No";
    return 0;
}