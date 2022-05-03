#include <iostream>

using namespace std;

int main()
{
    int a, n, i, t = 0;

    cin >> a >> n;

    while (n < 1)
    {
        cin >> n;
    }

    for (i = 0; i < n; i++)
    {
        t = t + a + i;
    }

    cout << t << endl;
}