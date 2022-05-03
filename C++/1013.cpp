#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, res;

    cin >> a >> b >> c;

    res = (a + b + abs(a - b)) / 2;
    res = (res + c + abs(res - c)) / 2;

    cout << res << " eh o maior" << endl;
}