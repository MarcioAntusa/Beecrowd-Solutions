#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, media;

    cin >> a >> b >> c;
    media = (a * 0.2) + (b * 0.3) + (c * 0.5);

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
}