#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double x = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        x = x + 6 + (1 / 6);
        x = 1 / x;
    }

    x = x + 3;

    cout << fixed << setprecision(10);
    cout << x << endl;
}