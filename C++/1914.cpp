#include <iostream>

using namespace std;

int main()
{
    int n, v1, v2, soma;
    string nome1, nome2, res, op1, op2;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nome1 >> op1;
        cin >> nome2 >> op2;

        cin >> v1 >> v2;
        soma = v1 + v2;

        if (soma % 2 == 0) {
            res = "PAR";
        }
        else {
            res = "IMPAR";
        }
        
        if (res == op1) {
            cout << nome1 << endl;
        }
        else {
            cout << nome2 << endl;
        }
    }
}