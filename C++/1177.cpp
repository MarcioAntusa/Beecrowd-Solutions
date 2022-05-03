#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, t, x;
    int n[1000];

    cin >> x;

    for (i = 0; i < 1000; i++)
    {
        n[i] = j;

        j++;

        if (j == x)
        {
            j = 0;
        }
    }

    for (t = 0; t < 1000; t++)
    {
        cout << "N[" << t << "] = " << n[t] << endl;
    }
}