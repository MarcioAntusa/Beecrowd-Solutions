#include <iostream>

using namespace std;

int main()
{
    string letras, mensagem;
    int caso, num, i;

    while (cin >> letras)
    {
        mensagem = "";
        cin >> caso;

        for (i = 0; i < caso; i++)
        {
            cin >> num;
            mensagem = mensagem + letras[num - 1];
        }

        cout << mensagem << endl;
    }
}