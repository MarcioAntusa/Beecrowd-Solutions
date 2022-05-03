#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    float a, t = 0;

    while (cin >> n)
    {
        cin >> a;
        t = a;

        for (i = 1; i < n; i++)
        {
            cin >> a;

            if (a < t)
            {
                t = a;
            }
        }

        cout << fixed << setprecision(2);
        cout << t << endl;
    }
}