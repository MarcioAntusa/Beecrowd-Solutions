#include <iostream>

using namespace std;

int main()
{
    int n, i, t = 0;
    char a;

    cin >> n;

    while (n != 0)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a;

            if (a == 'D')
            {
                t++;

                if (t == 4)
                {
                    t = t - 4;
                }
            }

            else if (a == 'E')
            {
                t--;

                if (t == -4)
                {
                    t = t + 4;
                }
            }
        }

		if (t == 0) { cout << 'N' << endl; }
	
		else if (t == 1){ cout << 'L' << endl; }

		else if (t == 2) { cout << 'S' << endl; }
	
		else if (t == 3) { cout << 'O' << endl; }	
				
		else if (t == -1) { cout << 'O' << endl; }
	
		else if (t == -2) { cout << 'S' << endl; }
	
		else if (t == -3) { cout << 'L' << endl; }

        t = 0;

        cin >> n;
    }
}