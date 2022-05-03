#include <iostream>

using namespace std;

int main()
{
    int s, t, f, res;

    cin >> s >> t >> f;

    res = s + t + f;

    if (res >= 24)
    {
        res -= 24;
        cout << res << endl;
    }
    else if (res < 0)
    {
        res += 24;
        cout << res << endl;
    }
    else
    {
        cout << res << endl;
    }
}