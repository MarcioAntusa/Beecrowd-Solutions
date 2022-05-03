#include <iostream>

using namespace std;

int main()
{
    string nome;
    int i = 0, res = 0;
    int count[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    getline(cin, nome);

    for (i = 0; i < nome.size(); i++)
    {
        if (nome[i] == 'I') { count[0]++; }
        if (nome[i] == 'l') { count[1]++; }
        if (nome[i] == 'o') { count[2]++; }
        if (nome[i] == 'v') { count[3]++; }
        if (nome[i] == 'e') { count[4]++; }
        if (nome[i] == 'y') { count[5]++; }
        if (nome[i] == 'u') { count[6]++; }
        if (nome[i] == '!') { count[7]++; }
    }

    while (count[0] > 0 && count[1] > 0 && count[2] >= 2 && count[3] > 0 && count[4] > 0 && count[5] > 0 && count[6] > 0 && count[7] > 0)
    {
        res++; count[0]--; count[1]--; count[2] -= 2; count[3]--; count[4]--; count[5]--; count[6]--, count[7]--;
    }

    cout << res << endl;
}