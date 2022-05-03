#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a;
    set<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        set<pair<int, int>>::iterator it;
        for (it = v.begin(); it != v.end() && it->first != a; it++)
            ;

        if (it != v.end())
        {
            v.insert(make_pair(it->first, it->second + 1));
            v.erase(*it);
        }
        else
        {
            v.insert(make_pair(a, 1));
        }
    }

    for (set<pair<int, int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " aparece " << it->second << " vez(es)\n";
    }
}
