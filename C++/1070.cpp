#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;

    cin >> n;

    while (i < 6)
    {
        n++;
        if (n % 2 != 0)
        {
            i++;
            cout << n << endl;
        }
    }
}