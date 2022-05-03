#include <iostream>

using namespace std;

int main()
{
    int x, z, i = 0, t = 0;

    cin >> x >> z;

    while (z <= x)
    {
        cin >> z;
    }

    while (t <= z)
    {
        t = t + x + i;
        i++;
    }

    cout << i << endl;
}