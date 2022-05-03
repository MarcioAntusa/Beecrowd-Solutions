#include <iostream>

using namespace std;

int main()
{
    int inteiro, aux_nota, aux_moeda, n_100, n_50, n_20, n_10, n_5, n_2, m_1, m_050, m_025, m_10, m_005, m_001;
    double dinheiro;

    cin >> dinheiro;

    inteiro = dinheiro;
    dinheiro *= 100;
    
    cout << "NOTAS:" << endl;

    n_100 = inteiro / 100;
    aux_nota = inteiro % 100;

    n_50 = aux_nota / 50;
    aux_nota = aux_nota % 50;

    n_20 = aux_nota / 20;
    aux_nota = aux_nota % 20;

    n_10 = aux_nota / 10;
    aux_nota = aux_nota % 10;

    n_5 = aux_nota / 5;
    aux_nota = aux_nota % 5;

    n_2 = aux_nota / 2;
    aux_nota = aux_nota % 2;

    cout << n_100 << " nota(s) de R$ 100.00" << endl;
    cout << n_50 << " nota(s) de R$ 50.00" << endl;
    cout << n_20 << " nota(s) de R$ 20.00" << endl;
    cout << n_10 << " nota(s) de R$ 10.00" << endl;
    cout << n_5 << " nota(s) de R$ 5.00" << endl;
    cout << n_2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;

    aux_moeda = dinheiro;

    m_1 = aux_nota / 1;

    m_050 = aux_moeda / 100;
    aux_moeda = aux_moeda % 100;

    m_050 = aux_moeda / 50;
    aux_moeda = aux_moeda % 50;

    m_025 = aux_moeda / 25;
    aux_moeda = aux_moeda % 25;

    m_10 = aux_moeda / 10;
    aux_moeda = aux_moeda % 10;

    m_005 = aux_moeda / 5;
    aux_moeda = aux_moeda % 5;

    m_001 = aux_moeda / 1;

    cout << m_1 << " moeda(s) de R$ 1.00" << endl;
    cout << m_050 << " moeda(s) de R$ 0.50" << endl;
    cout << m_025 << " moeda(s) de R$ 0.25" << endl;
    cout << m_10 << " moeda(s) de R$ 0.10" << endl;
    cout << m_005 << " moeda(s) de R$ 0.05" << endl;
    cout << m_001 << " moeda(s) de R$ 0.01" << endl;
}