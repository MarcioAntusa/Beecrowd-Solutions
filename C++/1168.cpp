#include <iostream>

using namespace std;

int main()
{
    int n, t = 0;
    string a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        for (int j = 0; a[j] != '\0'; j++)
        {
            if (a[j] == '1')
                t += 2;
            else if (a[j] == '2')
                t += 5;
            else if (a[j] == '3')
                t += 5;
            else if (a[j] == '4')
                t += 4;
            else if (a[j] == '5')
                t += 5;
            else if (a[j] == '6')
                t += 6;
            else if (a[j] == '7')
                t += 3;
            else if (a[j] == '8')
                t += 7;
            else if (a[j] == '9')
                t += 6;
            else if (a[j] == '0')
                t += 6;
        }
        cout << t << " leds\n";
        t = 0;
    }
}