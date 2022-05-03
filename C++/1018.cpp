#include <iostream>

using namespace std;

int main()
{
    int n, ced_100, ced_50, ced_20, ced_10, ced_5, ced_2, ced_1;

    cin >> n;

    ced_100 = n / 100;
    ced_50 = (n % 100) / 50;
    ced_20 = (n % ced_50) % 20;
    ced_10 = (n % 100) % 50 % 20 / 10;
    ced_5 = (n % 100) % 50 % 20 % 10 / 5;
    ced_2 = (n % 100) % 50 % 20 % 10 % 5 / 2;
    ced_1 = (n % 100) % 50 % 20 % 10 % 5 % 2 / 1;

    cout << n << endl;
    cout << ced_100 << " nota(s) de R$ 100,00" << endl;
    cout << ced_50 << " nota(s) de R$ 50,00" << endl;
    cout << ced_20 << " nota(s) de R$ 20,00" << endl;
    cout << ced_10 << " nota(s) de R$ 10,00" << endl;
    cout << ced_5 << " nota(s) de R$ 5,00" << endl;
    cout << ced_2 << " nota(s) de R$ 2,00" << endl;
    cout << ced_1 << " nota(s) de R$ 1,00" << endl;
}