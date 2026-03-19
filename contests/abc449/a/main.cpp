#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>

int main(void)
{
    double D;
    std::cin >> D;

    // 半径
    double r = D * 0.5f;

    double ans = M_PI * r * r;

    std::cout << std::fixed << std::setprecision(std::numeric_limits<double>::max_digits10) << ans << std::endl;
}