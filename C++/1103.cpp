#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0, t = 0, t1 = 0, t2 = 0;

    while (1)
    {
        cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        } else if (a == 0) {
            t1 = 24 * 60 + b;
        } else {
            t1 = a * 60 + b;
        }

        if (c == 0) {
            t2 = 24 * 60 + d;
        } else {
            t2 = c * 60 + d;
        }

        if (t2 > t1) {
            cout << t2 - t1 << "\n";
        } else {
            cout << 24 * 60 - (t1 - t2) << "\n";
        }
    }
}
