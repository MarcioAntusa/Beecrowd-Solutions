#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, a = 1, b = 2, c = 3;

    cin >> n;

    while (count < n)
    {
        count++;

        cout << a << " " << b << " " << c << " PUM" << endl;
        a += 4;
        b += 4;
        c += 4;
    }
}