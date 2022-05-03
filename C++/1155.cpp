#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float sum = 0, count = 1;

    cout << fixed << setprecision(2);

    for (int i = 0; i < 100; i++)
    {
        sum += (1 / count);
        count++;
    }

    cout << sum << endl;
}