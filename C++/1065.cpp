#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        if (n % 2 == 0)
        {
            res++;
        }
    }

    cout << res << " valores pares" << endl;
}