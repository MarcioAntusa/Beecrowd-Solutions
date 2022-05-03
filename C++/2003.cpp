#include <iostream>

using namespace std;

int main()
{
    int a, c;
    float res = 0;
    char b;

    while (cin >> a >> b >> c)
    {
        res = (a * 60 + 60 + c);

        if (res > 8 * 60)
        {
            res = res - 8 * 60;
            cout << "Atraso maximo: " << res << endl;
        }
        else
        {
            cout << "Atraso maximo: 0" << endl;
        }
    }
}