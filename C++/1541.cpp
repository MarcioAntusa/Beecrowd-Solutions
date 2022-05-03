#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, res;

    while (cin >> a >> b >> c)
    {
        if ((a || b || c) == 0)
        {
            break;
        }

        res = a * b * 100 / c;
        res = sqrt(res);

        cout << res << endl;
    }
}