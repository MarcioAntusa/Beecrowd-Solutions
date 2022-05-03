#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, t = 0, res, n1 = 0, n2 = 14;

    for (int i = 1; i <= 5; i++)
    {
        cin >> n;

        t += n;

        if (n > n1)
        {
            n1 = n;
        }
        if (n < n2)
        {
            n2 = n;
        }
    }

    cout << fixed << setprecision(1);
    res = t - n2 - n1;
    cout << res << endl;
}
