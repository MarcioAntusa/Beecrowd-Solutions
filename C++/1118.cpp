#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 0, b;
    float a, t = 0;

    while (b != 2)
    {
        cin >> a;

        if (a < 0 || a > 10)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            i++;
            t = t + a;

            if (i == 2)
            {
                t = t / 2;
                
                cout << fixed << setprecision(2);
                cout << "media = " << t << endl;

                i = 0;
                t = 0;

                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> b;

                while (b < 1 || b > 2)
                {
                    cout << "novo calculo (1-sim 2-nao)" << endl;
                    cin >> b;
                }
            }
        }
    }
}