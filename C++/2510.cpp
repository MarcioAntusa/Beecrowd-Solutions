#include <iostream>

using namespace std;

int main()
{
    int n;
    string nome;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nome;

        if (nome != "Batmain")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}