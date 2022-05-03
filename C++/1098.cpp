#include <iostream>

using namespace std;

int main()
{
    float sum;

    for (float i = 0; i <= 2.2; i += 0.2)
    {
        for (float j = 1; j <= 3; j++)
        {
            sum = j + i;
            cout << "I=" << i << " " << "J=" << sum << endl;
        }
    }
}