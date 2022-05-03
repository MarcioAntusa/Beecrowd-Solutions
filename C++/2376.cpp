#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n1, n2;
    char caracter = 'A';
    queue<char> letras;

    for (caracter = 'A'; caracter < 'Q'; caracter++)
    {
        letras.push(caracter);
    }

    for (int i = 0; i < 15; i++)
    {
        cin >> n1 >> n2;

        if (n1 > n2)
        {
            letras.push(letras.front());
            letras.pop();
            letras.pop();
        }
        else
        {
            letras.pop();
            letras.push(letras.front());
            letras.pop();
        }
    }
    
    cout << letras.front() << "\n";
}