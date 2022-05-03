#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, calc;

    cin >> n;
    cout << fixed << setprecision(2);

    if (n < 2000.00)
    {
        cout << "Isento" << endl;
    }

    else if (n >= 2000.01 && n <= 3000.00)
    {
        calc = (n - 2000.00) * 0.08;
        cout << "R$ " << calc << endl;
    }

    else if (n >= 3000.01 && n <= 4500.00)
    {
        calc = ((n - 3000.00) * 0.18) + (((n - 2000.00) - (n - 3000.00)) * 0.08);
        cout << "R$ " << calc << endl;
    }

    else if (n > 4500.00)
    {
        calc = ((n - 4500.00) * 0.28) + (1500 * 0.18) + (1000.00 * 0.08);
        cout << "R$ " << calc << endl;
    }
}