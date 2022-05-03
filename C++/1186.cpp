#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j;
    float s = 0, t;
    double m[12][12];
    char n;

    cin >> n;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (i = 1; i < 12; i++)
    {
        for (j = 11; j != 11 - i; j--)
        {
            s = s + m[i][j];
        }
    }

    cout << fixed << setprecision(1);

    if (n == 'S')
    {
        cout << s << endl;
    }
    else
    {
        t = s / 66;
        cout << t << endl;
    }
}