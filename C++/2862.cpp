#include <iostream>

using namespace std;

int main()
{
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num > 8000)
        {
            cout << "Mais de 8000!" << endl;
        }
        else
        {
            cout << "Inseto!" << endl;
        }
    }
}