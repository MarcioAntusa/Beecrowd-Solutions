#include <iostream>

using namespace std;

int main()
{
    int x, y, aux, res = 0;

    cin >> x >> y;

    if (y > x) {
        aux = y;
        y = x;
        x = aux;
    }

    if (y % 2 == 0) {
        y--;
    }

    y += 2;

    for (int i = y; i < x; i += 2) {
        res = res + i;
    }

    cout << res << endl;
}
