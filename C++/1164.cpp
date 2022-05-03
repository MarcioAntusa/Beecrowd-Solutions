#include <iostream>

using namespace std;

int main()
{
    int n, x, i, j, t = 0;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> x;

        for (j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                t = t + j;
            }
        }

        if (t == x)
        {
            cout << j << " eh perfeito\n";
        }
        else
        {
            cout << j << " nao eh perfeito\n";
        }
        t = 0;
    }
}