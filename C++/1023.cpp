#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    int n, a, b, i = 1, aux = 0;
    float t1 = 0, t2 = 0;
    map<int, int> v;

    while (cin >> n && n != 0)
    {
        cout << '\n';
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;

            int aux = floor(b / a);

            map<int, int>::iterator it;
            for (it = v.begin(); it != v.end() && it->first != aux; it++)
                ;

            if (it != v.end())
            {
                v[it->first] = it->second + a;

                t1 += a;
                t2 += b;
            }
            else
            {
                v.insert(make_pair(floor(b / a), a));
                t1 += a;
                t2 += b;
            }
        }

        cout << "Cidade# " << i++ << ":\n";

        for (map<int, int>::iterator it = v.begin(); it != v.end(); it++)
        {
            cout << it->second << '-' << it->first << ' ';
        }
        cout << fixed << setprecision(2);
        cout << "\nConsumo medio: " << (floor(100 * (t2 / t1)) / 100) << " m3.\n";

        t1 = t2 = 0;
        v.clear();
    }
}
