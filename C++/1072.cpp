#include <iostream>

using namespace std;

int main()
{
    int n, x, count1 = 0, count2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x >= 10 && x <= 20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    cout << count1 << " in" << endl;
    cout << count2 << " out" << endl;
}