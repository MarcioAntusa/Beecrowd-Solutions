#include <iostream>

using namespace std;

int main()
{
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << '\n';
    cout << b << c << a << '\n';
    cout << c << a << b << '\n';

    for (int i = 0; i < 10 && a[i] != '\0'; i++)
    {
        cout << a[i];
    }

    for (int i = 0; i < 10 && b[i] != '\0'; i++)
    {
        cout << b[i];
    }

    for (int i = 0; i < 10 && c[i] != '\0'; i++)
    {
        cout << c[i];
    }
    cout << '\n';
}
