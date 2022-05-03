#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, cont;
    vector<string> time;
    vector<pair<int, string>> M;
    vector<pair<int, string>>::iterator it;
    pair<int, string> V;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> V.second >> V.first;
        M.push_back(V);
    }

    sort(M.begin(), M.end());

    for (int j = 1; j <= q; ++j)
    {
        cont = 0;
        for (int i = M.size() - j; i >= 0; i = i - q)
        {
            time.push_back(M[i].second);
        }

        sort(time.begin(), time.end());

        cout << "Time " << j << endl;

        for (int i = 0; i < time.size(); i++)
        {
            cout << time[i] << endl;
        }

        cout << "\n";
        time.clear();
    }
}