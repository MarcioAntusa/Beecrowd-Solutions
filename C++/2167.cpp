#include <iostream>

using namespace std;

int main()
{
    int n, a, t, b = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;

        if (i > 0 && a < t)
        {
            cout << i << endl;
            i = n;
            b = 1;
        }

        t = a;
    }

    if (b == 0)
    {
        cout << 0 << endl;
    }
}