#include <iostream>

using namespace std;

int main()
{
    int a, b, i = 0, j = 0;

    cin >> a >> b;

    while (i < b)
    {
        i = i + b - a;
        j++;
    }

    cout << j << "\n";
}
