#include <iostream>

using namespace std;

int main()
{
    int n, matricula;
    float nota, aux, res;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> matricula >> nota;

        if (nota > aux)
        {
            aux = nota;
            res = matricula;
        }
    }

    if (aux >= 8)
    {
        cout << res << endl;
    }
    else
    {
        cout << "Minimum note not reached" << endl;
    }
}