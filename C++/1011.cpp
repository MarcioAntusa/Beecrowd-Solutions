#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num, vol;

    cin >> num;
    vol = ((4 / 3.0) * 3.14159 * (num * num * num));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << vol << endl;
}