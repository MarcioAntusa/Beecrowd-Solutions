#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n = 0, x = 0, i = 0;

    cin >> n;
    x = sqrt(n);

    for (i = 2; i <= x && (n % i) != 0; i++);

    if (n == 1) {
        cout << "N" << endl;
    } else if (i > x) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
}
