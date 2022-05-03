#include <iostream>

using namespace std;

int main()
{
    int i, j;
    long long m, n, f1 = 1, f2 = 1, s = 0;

    while (cin >> m >> n)
    {
        for (i = 1; i <= m; i++)
        {
            f1 = f1 * i;
        }

        for (j = 1; j <= n; j++)
        {
            f2 = f2 * j;
        }
        s = f1 + f2;

        cout << s << endl;
        f1 = 1;
        f2 = 1;
    }
}