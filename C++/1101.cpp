#include <iostream>

using namespace std;

int main()
{
    int n, m, x, t = 0;

    cin >> n >> m;

    while (n > 0 && m > 0)
    {
        if (n > m)
        {
            x = n;
            n = m;
            m = x;
        }

        for (int i = n; i <= m; i++)
        {
            t = t + i;
            cout << i << " ";
        }

        cout << "Sum=" << t << endl;
        
        t = 0;
        cin >> n >> m;
    }
}