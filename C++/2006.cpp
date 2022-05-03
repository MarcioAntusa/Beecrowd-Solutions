#include <iostream>

using namespace std;

int main()
{
    int n, num, res = 0;

    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cin >> num;

        if (num == n)
        {
            res++;
        }
    }
    
    cout << res << endl;
}