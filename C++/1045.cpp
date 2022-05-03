#include <iostream>

using namespace std;

int main()
{
    float a, b, c, aux;

    cin >> a >> b >> c;

    if (a < b) { aux = a; a = b; b = aux; }
    if (b < c) { aux = b; b = c; c = aux; }
    if (a < b) { aux = a; a = b; b = aux; }

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        if (a * a == b * b + c * c) {
            cout << "TRIANGULO RETANGULO" << endl;
        }

        if (a * a > b * b + c * c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }

        if (a * a < b * b + c * c) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c && a == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }

        if (a == b && c != a && b or b == c && a != b && c or c == a && b != c && a) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}