#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[20], b[20], c[20];

    cin >> a >> b >> c;

    if (a[0] == 'v' && b[0] == 'a')
    {
        if (c[0] == 'c')
        {
            cout << "aguia" << endl;
        }

        else if (c[0] == 'o')
        {
            cout << "pomba" << endl;
        }
    }

    if (a[0] == 'v' && b[0] == 'm')
    {

        if (c[0] == 'o')
        {
            cout << "homem" << endl;
        }

        else if (c[0] == 'h')
        {
            cout << "vaca" << endl;
        }
    }

    if (a[0] == 'i' && b[0] == 'i')
    {
        if (c[2] == 'm')
        {
            cout << "pulga" << endl;
        }

        else if (c[0] == 'h')
        {
            cout << "lagarta" << endl;
        }
    }

    if (a[0] == 'i' && b[0] == 'a')
    {
        if (c[0] == 'h')
        {
            cout << "sanguessuga" << endl;
        }

        else if (c[0] == 'o')
        {
            cout << "minhoca" << endl;
        }
    }
}