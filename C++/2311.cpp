#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float gd, nota, maior = 0, menor = 10, pontos, res;
    string nome;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nome >> gd;

        for (int j = 1; j <= 7; j++)
        {
            cin >> nota;
            pontos += nota;

            if (nota > maior)
            {
                maior = nota;
            }
            if (nota < menor)
            {
                menor = nota;
            }
        }

        res = gd * (pontos - maior - menor);

        cout << fixed << setprecision(2);
        cout << nome << " " << res << endl;

        pontos = 0;
        maior = 0;
        menor = 10;
    }
}
