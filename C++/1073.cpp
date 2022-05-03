#include <iostream>

using namespace std;

int main()
{
    int n, res;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            res = i * i;
            cout << i << "^2 = " << res << endl;
        }
    }
}