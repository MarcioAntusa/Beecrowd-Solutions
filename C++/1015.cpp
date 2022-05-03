#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2, potencia_1, potencia_2, res;

    cin >> x1 >> y1 >> x2 >> y2;

    potencia_1 = (x2 - x1);
    potencia_2 = (y2 - y1);
    res = sqrt((potencia_1 * potencia_1) + (potencia_2 * potencia_2));

    cout << fixed << setprecision(4);
    cout << res << endl;
}