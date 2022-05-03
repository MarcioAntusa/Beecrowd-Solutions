#include <iostream>

using namespace std;

int main()
{
    int a, m, d;
    string z1, z2, z3;
    char b;

    cin >> d >> b >> m >> b >> a;

    if (d < 10)
    {
        z1 = "0";
    }

    if (m < 10)
    {
        z2 = "0";
    }

    if (a < 10)
    {
        z3 = "0";
    }
    cout << z2 << m << "/" << z1 << d << "/" << z3 << a << endl;
    cout << z3 << a << "/" << z2 << m << "/" << z1 << d << endl;
    cout << z1 << d << "-" << z2 << m << "-" << z3 << a << endl;
}