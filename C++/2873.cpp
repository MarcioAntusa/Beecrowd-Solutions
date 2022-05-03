#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c, d, res;

    while (true)
    {
        std::cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }

        res = (c / d) * ((a / 2) + b);

        std::cout << res << std::fixed << std::setprecision(5) << '\n';
    }
}
