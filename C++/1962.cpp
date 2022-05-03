#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, ano, res;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ano;

        if (ano >= 2015)
        {
            res = abs(2014 - ano);
            cout << res << " A.C." << endl;
        }
        else if (ano < 2015)
        {
            res = abs(2015 - ano);
            cout << res << " D.C." << endl;
        }
    }
}