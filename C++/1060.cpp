#include <iostream>

using namespace std;

int main()
{
    int res = 0;
    float n;

    for (int i = 0; i < 6; i++)
    {
        cin >> n;

        if (n > 0)
        {
            res++;
        }
    }

    cout << res << " valores positivos" << endl;
}