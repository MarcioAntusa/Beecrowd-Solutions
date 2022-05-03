#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, aux, r1, r2;

    cin >> a >> b >> c;

    aux = ((b * b) - (4 * a * c));
    cout << fixed << setprecision(5);

    if (aux >= 0 && a != 0)
    {
        r1 = (-b + sqrt(aux)) / (2 * a);
        r2 = (-b - sqrt(aux)) / (2 * a);

        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }

    else
    {
        cout << "Impossivel calcular" << endl;
    }
}