#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 0, i = 0, j = 0, l = 0;

    while (cin >> a && a != 0)
    {
        for (i = 0; i < a; i++)
        {
            cin >> b;

            if (b == 0)
            {
                j++;
            }
            else
            {
                l++;
            }
        }

        cout << "Mary won " << j << " times and John won " << l << " times\n";

        j = l = 0;
    }
}
