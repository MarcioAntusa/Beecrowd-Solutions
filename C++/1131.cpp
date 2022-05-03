#include <iostream>

using namespace std;

int main()
{
    int x, y, test = 1, inter = 0, gremio = 0, empate = 0, count = 0;

    while (test == 1)
    {
        cin >> x >> y;

        if (x > y) {
            inter++;
        }
        else if (y > x) {
            gremio++;
        }
        else if (x == y) {
            empate++;
        }

        count++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> test;
    }

    if (test == 2)
    {
        cout << count << " grenais" << endl;
        cout << "Inter:" << inter << endl;
        cout << "Gremio:" << gremio << endl;
        cout << "Empates:" << empate << endl;

        if (inter > gremio) {
            cout << "Inter venceu mais" << endl;
        }
        if (gremio > inter) {
            cout << "Gremio venceu mais" << endl;
        }
        if (inter == gremio) {
            cout << "Nao houve vencedor" << endl;
        }
    }
}