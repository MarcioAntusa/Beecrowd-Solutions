#include <iostream>
#include <vector>

using namespace std;

vector<int> *adj;
bool visited[50];
int t = 0;

void dfs(int u)
{
    visited[u] = true;

    for (vector<int>::iterator it = adj[u].begin(); it != adj[u].end(); ++it)
    {
        if (!visited[*it])
        {
            t++;
            dfs(*it);
        }
    }
}

int main()
{
    int n, inicial, tam, arrestas, v1, v2;

    cin >> n;

    while (n--)
    {
        cin >> inicial >> tam >> arrestas;

        for (int i = 0; i < tam; i++)
            visited[i] = false;

        adj = new vector<int>[tam];

        for (int i = 0; i < arrestas; i++)
        {
            cin >> v1 >> v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

        dfs(inicial);

        cout << t * 2 << '\n';
        t = 0;
    }
}
