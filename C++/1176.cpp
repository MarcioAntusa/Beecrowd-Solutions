#include <iostream>

using namespace std;

int main()
{
    long long i = 2, n, a = 0, b = 1, d, j;
    long long c[60];

    for (i = 0; i < 60; i++)
    {
        c[i] = a + b;
        a = b;
        b = c[i];
    }

    cin >> n;

    for (j = 0; j < n; j++)
    {
        cin >> d;

        if (d == 0)
        {
            cout << "Fib(0) = 0" << endl;
        }
        if (d == 1)
        {
            cout << "Fib(1) = 1" << endl;
        }
        else if (d > 1)
        {
            cout << "Fib(" << d << ") = " << c[d - 2] << endl;
        }
    }
}