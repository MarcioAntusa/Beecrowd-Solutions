#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if (a < 10) {
            cout << "0" << a << ":";
        }
        else {
            cout << a << ":";
        }
        if (b < 10) {
            cout << "0" << b;
        }
        else {
            cout << b;
        }
        if (c == 0) {
            cout << " - A porta fechou!" << endl;
        }
        else {
            cout << " - A porta abriu!" << endl;
        }
    }
}