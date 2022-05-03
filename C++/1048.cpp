#include <iostream>
#include <iomanip>

using namespace std;

void aumento_salario(float salario, int aumento) {
    float reajuste = ((salario * aumento) / 100);
    float novo_salario = salario + reajuste;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novo_salario << '\n';
    cout << "Reajuste ganho: " << reajuste << '\n';
    cout << "Em percentual: " << aumento << " %" << '\n';
}

int main() {
    float salario, reajuste, novo_salario;

    cin >> salario;

    if (salario > 0 and salario <= 400) {
        aumento_salario(salario, 15);
    }

    else if (salario <= 800.00) {
        aumento_salario(salario, 12);
    }

    else if (salario <= 1200.00) {
        aumento_salario(salario, 10);
    }

    else if (salario <= 2000.00) {
        aumento_salario(salario, 7);
    }

    else if (salario > 2000.00) {
        aumento_salario(salario, 4);
    }
}