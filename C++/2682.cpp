#include <iostream>

using namespace std;

int main()
{
    int n, t = 0;
    string b;

    while (cin >> n)
    {
        if (n < t && b != "PARE")
        {
            cout << t + 1 << endl;
            b = "PARE";
        }
        t = n;
    }

    if (b != "PARE")
    {
        cout << t + 1 << endl;
    }
}