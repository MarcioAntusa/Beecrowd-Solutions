#include <iostream>

using namespace std;

int main()
{
    int n, count = 2, x = 0, y = 1, res;

    cin >> n;

    if (n >= 1)
    {
        cout << x << " ";
    }

    if (n >= 2)
    {
        cout << y;
    }

    while (count < n)
    {
        count++;
        res = x + y;
        x = y;
        y = res;
        cout << " " << res;
    }

    cout << endl;
}