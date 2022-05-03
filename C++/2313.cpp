#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i = 0;

    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        cout << "Invalido" << endl;
        i = 1;
    }

    else if (a == b && b == c && c == a)
    {
        cout << "Valido-Equilatero" << endl;
    }

    else if (a != b && b != c && c != a)
    {
        cout << "Valido-Escaleno" << endl;
    }

    else if ((a == b) != c || (b == c) != a || (c == a) != b)
    {
        cout << "Valido-Isoceles" << endl;
    }

    if (i != 1)
    {
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
        {
            cout << "Retangulo: S" << endl;
        }
        else
        {
            cout << "Retangulo: N" << endl;
        }
    }
}