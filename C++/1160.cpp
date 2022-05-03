#include <iostream>

using namespace std;

int main()
{
    int t, pa, pb, cont = 0;
    double g1, g2;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cont = 0;
        cin >> pa >> pb >> g1 >> g2;

        while (pa <= pb)
        {
            pa = pa + ((pa * g1) / 100);
            pb = pb + ((pb * g2) / 100);
            cont++;

            if (cont > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (cont <= 100)
        {
            cout << cont << " anos." << endl;
        }
    }
}