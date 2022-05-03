#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int count = 0;
    float n, res = 0;

    for (int i = 1; i <= 6; i++)
    {
        cin >> n;

        if (n > 0)
        {
            count++;
            res += n;
        }
    }

    res = res / count;
    cout << fixed << setprecision(1);
    cout << count << " valores positivos" << endl;
    cout << res << endl;
}