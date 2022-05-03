#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, a;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (!(v[i] % 2))
        {
            cout << v[i] << '\n';
        }
    }

    for (int i = n; i >= 0; i--)
    {
        if ((v[i] % 2) != 0)
        {
            cout << v[i] << '\n';
        }
    }
}
