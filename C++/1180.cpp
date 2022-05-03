#include <iostream>

using namespace std;

int main()
{
    int n, i, pos, menor;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    menor = a[0];

    for (i = 1; i < n; i++)
    {
        if (menor > a[i])
        {
            menor = a[i];
            pos = i;
        }
    }
    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
}