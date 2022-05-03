#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, count = 1;
    float res, aux;

    while (n >= 0)
    {
        cin >> n;

        if (n >= 0)
        {
            aux += n;
            res = aux / count;
            count++;
        }
    }

    cout << fixed << setprecision(2);
    cout << res << endl;
}