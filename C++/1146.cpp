#include <iostream>

using namespace std;

int main()
{
    int n;

    while (n != 0)
    {
        cin >> n;

        if (n > 0)
        {
            cout << "1";

            for (int i = 2; i <= n; i++)
            {
                cout << " " << i;
            }
            cout << endl;
        }
    }
}