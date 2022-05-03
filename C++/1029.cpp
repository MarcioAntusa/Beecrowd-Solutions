#include <iostream>

using namespace std;

int t = 0;

int fib(int n)
{
    if (n <= 1)
        return n;
    t += 2;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, a, f;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        f = fib(a);
        cout << "fib(" << a << ") = " << t << " calls = " << f << "\n";
        t = 0;
    }
}
