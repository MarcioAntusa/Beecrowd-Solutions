#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, res;

    cin >> n1 >> n2 >> n3 >> n4;
    res = n1 * 0.2 + n2 * 0.3 + n3 * 0.4 + n4 * 0.1;
    cout << fixed << setprecision(1);

    if (res >= 7.0)
    {
        cout << "Media: " << res << endl;
        cout << "Aluno aprovado." << endl;
    }

    if (res < 5.0)
    {
        cout << "Media: " << res << endl;
        cout << "Aluno reprovado." << endl;
    }

    if (res >= 5.0 && res <= 6.9)
    {
        cout << "Media: " << res << endl;
        cout << "Aluno em exame." << endl;

        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;

        res = (res + n5) / 2;

        if (res >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }

        else if (res <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << res << endl;
    }
}