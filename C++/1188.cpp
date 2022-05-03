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

    for (i = 7; i <= 11; i++)
    {
        for (j = 5 - c; j <= 6 + c; j++)
        {
            s = s + b[i][j];
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