#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int n[20];
    int t[20];

    for (i = 0; i < 20; i++)
    {
        cin >> n[i];
    }

    for (j = 0; j < 20; j++)
    {
        t[j] = n[i = i - 1];
        cout << "N[" << j << "] = " << t[j] << endl;
    }
}