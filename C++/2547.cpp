#include <iostream>

using namespace std;

int main()
{
    int n, a_min, a_max, num, res;

    while (cin >> n)
    {
        res = 0;
        cin >> a_min >> a_max;

        for (int i = 0; i < n; i++)
        {
            cin >> num;

            if (num >= a_min && num <= a_max)
            {
                res++;
            }
        }

        cout << res << endl;
    }
}