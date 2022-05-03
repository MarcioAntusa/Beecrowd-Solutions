#include <iostream>

using namespace std;

int main()
{
    int aux;

    for (int i = 1; i <= 9; i += 2)
    {
        aux = i + 6;

        for (int j = aux; j >= aux - 2; j = j - 1)
        {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
    }
}