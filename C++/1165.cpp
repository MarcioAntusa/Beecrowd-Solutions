#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, k, n, v;
    float x;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> v;
        
        for (j = 2; j <= v; j++) {
            x = sqrt(j);
            for (k = 2; k <= x && (j % k) != 0; k++);
        }

        if (v == 0) {
            cout << "0 nao eh primo" << endl;
        } else if (k > x) {
            cout << v << " eh primo" << endl;
        } else {
            cout << v << " nao eh primo" << endl;
        }
    }
}