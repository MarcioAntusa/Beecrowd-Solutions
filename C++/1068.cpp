#include <iostream>

using namespace std;

int main()
{
    int m[2] = {0, 0};
    string a;

    while (cin >> a)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '(')
            {
                m[0]++;
            }
            else if (a[i] == ')')
            {
                if (m[0] > 0)
                {
                    m[0]--;
                }
                else
                {
                    m[1]++;
                    i = a.size();
                }
            }
        }

        if (!m[0] && !m[1])
        {
            cout << "correct\n";
        }
        else
        {
            cout << "incorrect\n";
        }
        m[0] = m[1] = 0;
    }
}
