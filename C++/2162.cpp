#include <iostream>

using namespace std;

int main()
{
    int n, res = 1;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] >= a[i - 1] && a[i - 1] >= a[i - 2] || a[i] <= a[i - 1] && a[i - 1] <= a[i - 2])
        {
            res = 0;
        }
    }

    if (n == 2 && a[0] == a[1])
    {
        res = 0;
    }

    cout << res << endl;
}