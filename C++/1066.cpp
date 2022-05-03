#include <iostream>

using namespace std;

int main()
{
    int n, b = 0, c = 0, d = 0, e = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        if ((n % 2) == 0) {
            b++;
        }
        if ((n % 2) != 0) {
            c++;
        }
        if (n > 0) {
            d++;
        }
        if (n < 0) {
            e++;
        }
    }

    cout << b << " valor(es) par(es)" << endl;
    cout << c << " valor(es) impar(es)" << endl;
    cout << d << " valor(es) positivo(s)" << endl;
    cout << e << " valor(es) negativo(s)" << endl;
}