#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float cod, qtd, res;

    cin >> cod >> qtd;

    cout << fixed << setprecision(2);

    if (cod == 1)
    {
        res = 4.00 * qtd;
        cout << "Total: R$ " << res << endl;
    }

    if (cod == 2)
    {
        res = 4.50 * qtd;
        cout << "Total: R$ " << res << endl;
    }

    if (cod == 3)
    {
        res = 5.00 * qtd;
        cout << "Total: R$ " << res << endl;
    }

    if (cod == 4)
    {
        res = 2.00 * qtd;
        cout << "Total: R$ " << res << endl;
    }

    if (cod == 5)
    {
        res = 1.50 * qtd;
        cout << "Total: R$ " << res << endl;
    }
}