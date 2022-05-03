#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 0;
    double x;
    double y[100];

    cin >> x;

    y[i] = x;

    for (i = 0; i < 100; i++)
    {
        if (i > 0)
        {
            y[i] = y[i - 1] / 2;
        }
        
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << y[i] << endl;
    }
}