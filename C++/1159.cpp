#include <iostream>

using namespace std;

int main()
{
    int n, i, x = 0, t = 0;

    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            x = n;
        }

        else
        {
            x = n + 1;
        }

        for (i = 0; i < 5; i++)
        {
            t = t + x;
            x += 2;
        }

        cout << t << endl;
        cin >> n;

        t = 0; x = 0;
    }
}