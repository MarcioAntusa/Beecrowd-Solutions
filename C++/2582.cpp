#include <iostream>

using namespace std;

int main()
{
    int n, sum, x, y;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        sum = x + y;

        if (sum == 0) {
            cout << "PROXYCITY" << endl;
        }
        else if (sum == 1) {
            cout << "P.Y.N.G." << endl;
        }
        else if (sum == 2) {
            cout << "DNSUEY!" << endl;
        }
        else if (sum == 3) {
            cout << "SERVERS" << endl;
        }
        else if (sum == 4) {
            cout << "HOST!" << endl;
        }
        else if (sum == 5) {
            cout << "CRIPTONIZE" << endl;
        }
        else if (sum == 6) {
            cout << "OFFLINE DAY" << endl;
        }
        else if (sum == 7) {
            cout << "SALT" << endl;
        }
        else if (sum == 8) {
            cout << "ANSWER!" << endl;
        }
        else if (sum == 9) {
            cout << "RAR?" << endl;
        }
        else if (sum == 10) {
            cout << "WIFI ANTENNAS" << endl;
        }
    }
}