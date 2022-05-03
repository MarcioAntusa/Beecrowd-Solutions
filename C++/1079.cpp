#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float a, b, c, res;

    cin >> n;

    cout << fixed << setprecision(1);

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        res = (a * 2 + b * 3 + c * 5) / 10;
        cout << res << endl;
    }
}