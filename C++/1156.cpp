#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double i, t = 0, s = 0, a = 1;

    for (i = 1; i <= 39; i += 2)
    {
        t = i / a;
        s += t;
        a *= 2;
    }
    
    cout << fixed << setprecision(2);
    cout << s << endl;
}