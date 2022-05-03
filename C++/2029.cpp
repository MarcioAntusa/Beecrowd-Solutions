#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float v, d, altura, area;

    while (cin >> v >> d)
    {
        d = d / 2;

        altura = v / (3.14 * d * d);
        area = 3.14 * d * d;

        cout << fixed << setprecision(2);
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }
}