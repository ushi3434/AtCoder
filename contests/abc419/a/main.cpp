#include <iostream>
#include <vector>
#include <string>
#include <map>

int main(void)
{
    std::map<std::string, std::string> translate;

    translate.emplace("red", "SSS");
    translate.emplace("blue", "FFF");
    translate.emplace("green", "MMM");

    std::string input;

    std::cin >> input;

    if (translate.contains(input))
    {
        std::cout << translate.at(input) << "\n";
    }
    else
    {
        std::cout << "Unknown\n";
    }
}