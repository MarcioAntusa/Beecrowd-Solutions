#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j;
    double s = 0, t = 0;
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

    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 10 - i; j++)
        {
            s = s + m[i][j];
        }
    }

    cout << fixed << setprecision(1);
    
    if (n == 'M')
    {
        t = s / 30;
        cout << t << endl;
    }
    else
    {
        cout << s << endl;
    }
}