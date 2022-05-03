#include <iostream>

using namespace std;

int main()
{
    int n, i, res;
    int c[51];

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (i = 0; i < n; i++)
    {
        res = 0;
        res = res + c[i];

        if (i < n - 1)
        {
            res = res + c[i + 1];
        }

        if (i > 0)
        {
            res = res + c[i - 1];
        }

        cout << res << endl;
    }
}