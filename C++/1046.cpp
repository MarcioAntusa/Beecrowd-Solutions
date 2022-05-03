#include <iostream>

using namespace std;

int main()
{
    int inicio, fim, res;

    cin >> inicio >> fim;

    if (inicio == fim)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    else if (inicio > fim)
    {
        res = ((24 - inicio) + fim);
        cout << "O JOGO DUROU " << res << " HORA(S)" << endl;
    }

    else if (fim > inicio)
    {
        res = (fim - inicio);
        cout << "O JOGO DUROU " << res << " HORA(S)" << endl;
    }
}