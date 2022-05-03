#include <iostream>

using namespace std;

int main()
{
    int d, d1, d2, h, h1, h2, m, m1, m2, s, s1, s2, t1, t2, t3;
    char c[10];

    cin >> c >> d1 >> h1 >> c >> m1 >> c >> s1;
    cin >> c >> d2 >> h2 >> c >> m2 >> c >> s2;

    t1 = d1 * 3600 * 24 + h1 * 3600 + m1 * 60 + s1;
    t2 = d2 * 3600 * 24 + h2 * 3600 + m2 * 60 + s2;

    t3 = t2 - t1;

    d = (t3 / (3600 * 24));
    h = (t3 % (3600 * 24)) / 3600;
    m = (t3 % (3600 * 24) % 3600) / 60;
    s = (t3 % (3600 * 24) % 3600) % 60;

    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;
}