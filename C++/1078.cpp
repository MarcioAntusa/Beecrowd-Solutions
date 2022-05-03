#include <iostream>

using namespace std;

int main()
{
    int n, res;

    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        res = i * n;
        cout << i << " x " << n << " = " << res << endl;
    }
}
