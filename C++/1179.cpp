#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j = 0, l = 0, t1 = 0, t2 = 0, v1 = 5, v2 = 0, m = 0, v3 = 5, v4 = 0;
    int n[15];
    int p[15];
    int im[15];

    for (i = 0; i < 15; i++)
    {
        cin >> n[i];

        if (n[i] % 2 == 0)
        {
            p[j] = n[i];
            j++;
        }

        else
        {
            im[m] = n[i];
            m++;
        }

        if (j == v1)
        {
            for (l = 0; l < 5; l++)
            {
                cout << "par[" << l << "] = " << p[l + v2] << endl;
            }
            v1 = v1 + 5;
            v2 = v2 + 5;
        }

        if (m == v3)
        {
            for (m = 0; m < 5; m++)
            {
                cout << "impar[" << m << "] = " << im[m + v4] << endl;
            }
            v3 = v3 + 5;
            v4 = v4 + 5;
        }
    }

    t2 = m - v4;
    for (i = 0; i < t2; i++)
    {
        cout << "impar[" << i << "] = " << im[i + v4] << endl;
    }

    t1 = j - v2;
    for (i = 0; i < t1; i++)
    {
        cout << "par[" << i << "] = " << p[i + v2] << endl;
    }
}