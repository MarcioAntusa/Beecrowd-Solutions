#include <iostream>

using namespace std;

int main()
{
    int t = 7;

    for (int i = 1; i <= 9; i += 2)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << "I=" << i << " ";
            cout << "J=" << t << endl;
            t = t - 1;
        }
        t = 7;
    }
}