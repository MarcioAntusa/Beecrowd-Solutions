#include <bits/stdc++.h>

using namespace std;

vector<char> *adj;
bool visited[27];
bool alf[27];

void dfs(int v)
{
    visited[v] = alf[v] = true;

    for (vector<char>::iterator it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if (!visited[int(*it) - 97])
        {
            dfs(int(*it) - 97);
        }
    }
}

int main()
{
    int n, vert, arres, t = 0;
    char v1, v2;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> vert >> arres;
        adj = new vector<char>[vert];

        for (int j = 0; j < vert; ++j)
        {
            visited[j] = false;
            alf[j] = false;
        }

        for (int j = 0; j < vert; ++j)
        {
            adj[j].push_back(char(j + 97));
        }

        for (int j = 0; j < arres; ++j)
        {
            cin >> v1 >> v2;
            adj[int(v1) - 97].push_back(v2);
            adj[int(v2) - 97].push_back(v1);
        }

        cout << "Case #" << i + 1 << ":\n";

        for (int j = 0; j < vert; ++j)
        {
            if (!visited[j])
            {
                dfs(int(adj[j][0]) - 97);

                for (int l = 0; l < vert; ++l)
                {
                    if (alf[l])
                    {
                        cout << char(l + 97) << ',';
                        alf[l] = false;
                    }
                }
                cout << '\n';

                t++;
            }
        }
        cout << t << ' ' << "connected components\n\n";
        t = 0;

        delete[] adj;
    }
}
