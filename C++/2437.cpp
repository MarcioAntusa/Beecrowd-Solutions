#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a = 0, b = 0, c = 0, d = 0;

    cin >> a >> b >> c >> d;
    cout << fabs(c - a) + fabs(d - b) << "\n";
}
