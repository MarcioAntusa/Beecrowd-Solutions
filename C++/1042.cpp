#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3], aux[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    aux[0] = arr[0];
    aux[1] = arr[1];
    aux[2] = arr[2];

    sort(arr, arr + 3);

    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
        {
            cout << arr[i] << '\n';

            if (i == 2)
            {
                cout << '\n';
            }
        }
        else
        {
            cout << aux[i - 3] << '\n';
        }
    }
}