#include <iostream>

using namespace std;

int main()
{
    int n, tam, t = 0;
    char l[26];
    char alf[26] = {'A', 'B', 'C', 'D', 'E', 
                    'F', 'G', 'H', 'I', 'J', 
                    'K', 'L', 'M', 'N', 'O', 
                    'P', 'Q', 'R', 'S', 'T', 
                    'U', 'V', 'W', 'X', 'Y', 'Z'};

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> tam;
        cin >> l;

        for (int j = 0; j < tam && t != 3; ++j)
        {
            if (l[j] != alf[j])
            {
                t++;
            }
        }
        if (t == 2)
        {
            cout << "There are the chance.\n";
        }
        else
        {
            cout << "There aren't the chance.\n";
        }
        t = 0;
    }
}
