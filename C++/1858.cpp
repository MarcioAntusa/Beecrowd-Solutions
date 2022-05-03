#include <iostream>

using namespace std;

int main()
{
    int num, min = 20, pos, i;

    cin >> num;
    int n[num];

    for (i = 0; i < num; i++)
    {
        cin >> n[i];
        if (n[i] < min)
        {
            min = n[i];
            pos = 1 + i;
        }
    }
    
    cout << pos << '\n';
}