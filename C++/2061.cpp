#include <iostream>

using namespace std;

int main()
{
    int n, m;
    string nome;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> nome;

        if (nome == "fechou")
        {
            n++;
        }
        if (nome == "clicou")
        {
            n--;
        }
    }
    
    cout << n << endl;
}