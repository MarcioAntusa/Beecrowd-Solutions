#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, n1, n2;
    float x;

    cin >> n1;

    for (i = 0; i < n1; i++)
    {
        cin >> n2;

        x = sqrt(n2);

        for (j = 2; j <= x && (n2 % j) != 0; j++)
            ;

        if (j > x || n2 == 1)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
}