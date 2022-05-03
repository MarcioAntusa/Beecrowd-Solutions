#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    double y, res;

    cin >> x >> y;

    res = x / y;
    cout << fixed << setprecision(3);
    cout << res << " km/l" << endl;
}