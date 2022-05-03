#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count = 1, p, n, n1, n2, res = 0;

    cin >> p >> n;
    cin >> n1;

    for (int i = 1; i < n; i++)
    {
        cin >> n2;
        res = abs(n2 - n1);

        if (res >= 0 && res <= p)
        {
            count++;
            n1 = n2;
        }
    }

    if (count == n)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "GAME OVER" << endl;
    }
}