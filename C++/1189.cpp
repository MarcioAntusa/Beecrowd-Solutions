#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, c = 0;
    double b[12][12];
    double s = 0, t = 0;
    char a;

    cin >> a;

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 1 + i; j <= 10 - i; j++)
        {
            s = s + b[j][i];
        }
        c++;
    }

    cout << fixed << setprecision(1);

    if (a == 'S')
    {
        cout << s << endl;
    }
    else
    {
        t = s / 30;
        cout << t << endl;
    }
}