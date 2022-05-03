#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    float n, res;

    while (count < 2)
    {
        cin >> n;

        if (n < 0 || n > 10)
        {
            cout << "nota invalida" << endl;
        }

        else
        {
            count = count + 1;
            res = (res + n) / count;

            if (count == 2)
            {
                cout << "media = " << res << endl;
            }
        }
    }
}