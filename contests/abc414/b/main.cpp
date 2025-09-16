#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    str.reserve(100);

    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        char c;
        int l;

        std::cin >> c >> l;

        for (int j = 0; j < l; j++)
        {
            str += c;

            if (str.size() > 100)
            {
                std::cout << "Too Long" << std::endl;
                return 0;
            }
        }
    }

    std::cout << str << std::endl;
    return 0;
}