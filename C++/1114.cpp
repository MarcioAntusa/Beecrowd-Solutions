#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    while (n != 2002)
    {
        cout << "Senha Invalida" << endl;
        cin >> n;
    }

    if (n == 2002)
    {
        cout << "Acesso Permitido" << endl;
    }
}