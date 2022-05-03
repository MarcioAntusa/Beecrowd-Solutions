#include <iostream>

using namespace std;

int main()
{
    int n, x, y, aux, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                count = count + j;
            }
        }

        cout << count << endl;
        count = 0;
    }
}