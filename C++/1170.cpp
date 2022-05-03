#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    float a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        while (a > 1)
        {
            a = a / 2;
            c++;
        }
        cout << c << " dias\n";
        c = 0;
    }
}
