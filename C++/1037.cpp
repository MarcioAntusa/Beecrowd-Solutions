#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;

    cin >> n;

    cout << fixed << setprecision(2);

    if (n >= 0 and n <= 25.0000) {
        cout << "Intervalo [0,25]" << endl;
    }

    else if (n >= 25.00001 and n <= 50.0000000) {
        cout << "Intervalo (25,50]" << endl;
    }

    else if (n >= 50.00000001 and n <= 75.0000000000) {
        cout << "Intervalo (50,75]" << endl;
    }

    else if (n >= 75.00000000001 and n <= 100.0000000000000) {
        cout << "Intervalo (75,100]" << endl;
    }

    else {
        cout << "Fora de intervalo" << endl;
    }
}