#include <iostream>

using namespace std;

int main()
{
    int n, i, t;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        t = i * i;
        cout << i << " " << t << " " << t * i << endl;
        cout << i << " " << t + 1 << " " << t * i + 1 << endl;
    }
}