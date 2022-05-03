#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, res;

    cin >> a >> b >> c;
    
    cout << fixed << setprecision(1);

    if (a + b > c && b + c > a && b + a > c && c + a > b)
    {
        res = a + b + c;
        cout << "Perimetro = " << res << endl;
    }

    else
    {
        res = ((a + b) * c) / 2.0;
        cout << "Area = " << res << endl;
    }
}