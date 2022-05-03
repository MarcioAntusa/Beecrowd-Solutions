#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a = i * 1;
        b = i * i;
        c = b * a;

        cout << a << " " << b << " " << c << endl;
    }
}