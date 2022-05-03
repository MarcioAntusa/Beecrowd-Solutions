#include <iostream>

using namespace std;

int main()
{
    int num, maior = 0, pos;

    for (int i = 1; i <= 100; i++)
    {
        cin >> num;

        if (num > maior)
        {
            maior = num;
            pos = i;
        }
    }

    cout << maior << endl;
    cout << pos << endl;
}