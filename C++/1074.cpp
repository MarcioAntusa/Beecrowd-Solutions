#include <iostream>

using namespace std;

int main()
{
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if ((num < 0) && (num % 2 != 0))
        {
            cout << "ODD NEGATIVE" << endl;
        }
        else if ((num > 0) && (num % 2 != 0))
        {
            cout << "ODD POSITIVE" << endl;
        }
        else if (num == 0)
        {
            cout << "NULL" << endl;
        }
        else if (num < 0 && num % 2 == 0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (num > 0 && num % 2 == 0)
        {
            cout << "EVEN POSITIVE" << endl;
        }
    }
}