#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero, hora;
    float valor, salario;

    cin >> numero >> hora >> valor;
    salario = hora * valor;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;
}