#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, y;
    float res, x;

    cout << fixed << setprecision(1);
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            res = (x / y);
            cout << res << endl;
        }
    }
}