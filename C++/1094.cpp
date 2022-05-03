#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, aux = 0, num, c = 0, r = 0, s = 0;
    float porcent_c, porcent_r, porcent_s;
    string letra;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num >> letra;
        aux += num;

        if (letra == "C") {
            c += num;
        }

        if (letra == "R") {
            r += num;
        }

        if (letra == "S") {
            s += num;
        }
    }

    porcent_c = float(c * 100) / aux;
    porcent_r = float(r * 100) / aux;
    porcent_s = float(s * 100) / aux;

    cout << fixed << setprecision(2);
    cout << "Total: " << aux << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << porcent_c << " %" << endl;
    cout << "Percentual de ratos: " << porcent_r << " %" << endl;
    cout << "Percentual de sapos: " << porcent_s << " %" << endl;
}