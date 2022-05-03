#include <iostream>

using namespace std;

int main()
{
    int i;

    int x[10];

    for (i = 0; i < 10; i++)
    {
        cin >> x[i];

        if (x[i] < 1)
        {
            cout << "X[" << i << "] = " << 1 << endl;
        }
        else
        {
            cout << "X[" << i << "] = " << x[i] << endl;
        }
    }
}