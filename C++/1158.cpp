#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a, b, x = 0, t = 0;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;

        if (a % 2 == 0)
        {
            x = a + 1;
        }
        else
        {
            x = a;
        }

        for (j = 0; j < b; j++)
        {
            t = t + x;
            x += 2;
        }

        cout << t << endl;
        t = 0;
    }
}