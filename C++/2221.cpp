#include <iostream>

using namespace std;

int main()
{
    int t, b, Ai, Di, Li;
    int res[2] = {0, 0};

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> b;

        for (int j = 0; j < 2; j++)
        {
            cin >> Ai >> Di >> Li;

            if (Li % 2 == 0)
            {
                res[j] = Ai + Di + b;
            }
            else
            {
                res[j] = Ai + Di;
            }
        }

        if (res[0] > res[1])
        {
            cout << "Dabriel" << endl;
        }
        else if (res[1] > res[0])
        {
            cout << "Guarte" << endl;
        }
        else if (res[0] == res[1])
        {
            cout << "Empate" << endl;
        }
    }
}
