#include <iostream>
#include <vector>
#include <string>

int CheckVersion(const std::string &str)
{
    if (str == "Ocelot")
        return 1;
    else if (str == "Serval")
        return 2;
    else
        return 3;
}

int main(void)
{
    std::string X, Y;

    std::cin >> X >> Y;

    int xVersion = CheckVersion(X);
    int yVersion = CheckVersion(Y);

    if (xVersion >= yVersion)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}