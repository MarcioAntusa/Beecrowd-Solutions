#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int a, b, c, d, i, j, t = 0;

    cin >> a;

    for (i = 0; i < a; i++)
    {
        cin >> b;
        v1.push_back(b);
    }

    cin >> c;

    for (i = 0; i < c; i++)
    {
        cin >> d;
        v2.push_back(d);
    }

    for (int i = 0; i < (int)v1.size(); i++)
    {
        for (j = 0; j < c; j++)
        {
            if (v1[i] == v2[j])
            {
                v1[i] = -1;
                break;
            }
        }
    }

    for (i = 0; i < a; i++)
    {
        if (v1[i] > 0 && t != 1)
        {
            cout << v1[i];
            t = 1;
            i++;
        }

        if (v1[i] > 0 && t == 1)
        {
            cout << " " << v1[i];
        }
    }
    
    cout << "\n";
}