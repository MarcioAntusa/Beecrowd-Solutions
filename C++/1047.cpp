#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int h1, h2, m1, m2, t1, t2;

    cin >> h1 >> m1 >> h2 >> m2;

    if (h1 < h2) {
        t1 = h2 - h1;
    }
    if (h1 > h2) {
        t1 = 24 - (h1 - h2);
    }
    if (h1 == h2) {
        t1 = h1 - h2;
    }
    if (m1 < m2) {
        t2 = m2 - m1;
    }
    if (m1 > m2) {
        t2 = abs(60 - (m1 - m2));
        t1 = (t1 * 3600 - t2) / 3600;
    }
    if (m1 == m2) {
        t2 = m1 - m2;
    }
    if (h1 == h2 && m1 == m2) {
        t1 = 24;
        t2 = 0;
    }

    cout << "O JOGO DUROU " << t1 << " HORA(S) E " << t2 << " MINUTO(S)" << endl;
}