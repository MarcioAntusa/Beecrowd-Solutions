#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, res = 0;

    while (cin >> a >> b)
    {
        if (a == b)
        {
            cout << 0 << "\n";
        }
        else
        {
            res = (abs(b - a) - 1);
            cout << res << "\n";
        }
    }
}
