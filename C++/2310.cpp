#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double tent_s = 0, tent_b = 0, tent_a = 0, suc_s = 0, suc_b = 0, suc_a = 0, pontos_s, pontos_b, pontos_a;
    double p[6];
    string nome;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nome;

        for (int j = 0; j < 6; j++)
        {
            cin >> p[j];
        }

        tent_s += p[0];
        tent_b += p[3];
        tent_a += p[1];
        suc_s += p[4];
        suc_b += p[2];
        suc_a += p[5];
    }

    pontos_s = tent_b * 100 / tent_s;
    pontos_b = suc_s * 100 / tent_a;
    pontos_a = suc_a * 100 / suc_b;

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << pontos_s << " %." << endl;
    cout << "Pontos de Bloqueio: " << pontos_b << " %." << endl;
    cout << "Pontos de Ataque: " << pontos_a << " %." << endl;
}