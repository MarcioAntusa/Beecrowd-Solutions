#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, j;
    float s = 0, t;
    double m[12][12];
    char a;

    cin >> n;
    cin >> a;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (j = 0; j < 12; j++)
    {
        s = s + m[n][j];
    }

    cout << fixed << setprecision(1);

    if (a == 'S')
    {
        cout << s << endl;
    }
    else
    {
        t = s / 12;
        cout << t << endl;
    }
}