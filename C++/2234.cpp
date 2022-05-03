#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float h, p, res;

    cin >> h >> p;
    res = h / p;
    
    cout << fixed << setprecision(2);
    cout << res << endl;
}