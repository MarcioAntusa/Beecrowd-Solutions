#include <iostream>

using namespace std;

int main()
{
    int n, a, b, res;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        res = a + b;
        cout << res << endl;
    }
}
