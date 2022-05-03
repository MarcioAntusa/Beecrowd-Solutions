#include <iostream>

using namespace std;

int main()
{
    int i = 0, t;
    int x[10];

    cin >> x[i];

    t = x[i];

    cout << "N[" << i << "] = " << x[0] << endl;

    for (i = 1; i < 10; i++)
    {
        t = t * 2;
        cout << "N[" << i << "] = " << t << endl;
    }
}