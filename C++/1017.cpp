#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double res, tem, vel;

    cin >> tem >> vel;
    res = (tem * vel) / 12;

    cout << fixed << setprecision(3);
    cout << res << endl;
}